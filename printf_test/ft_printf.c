/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:41:13 by psemsari          #+#    #+#             */
/*   Updated: 2020/01/07 11:59:51 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_isflag(char c)
{
	char	*comp;
	int		i;

	i = 0;
	comp = "cspdiuxX%";
	while (comp[i])
	{
		if (c == comp[i])
			return (i);
		i++;
	}
	return (-1);
}

static void	ft_initft(t_ptrtype *ptr)
{
	ptr[8] = &ft_managper;
	ptr[7] = &ft_managxu;
	ptr[6] = &ft_managx;
	ptr[5] = &ft_managuint;
	ptr[4] = &ft_managint;
	ptr[3] = &ft_managint;
	ptr[2] = &ft_managptr;
	ptr[1] = &ft_managstr;
	ptr[0] = &ft_managchar;
}

int			ft_initflag(char *str, t_main *main)
{
	int			ret;
	int			flag;
	int			len;
	t_manag		manag;
	t_ptrtype	manag_type[9];

	len = 0;
	ft_initft(manag_type);
	while (*str)
	{
		flag = ft_isflag(*str);
		if (flag != -1)
		{
			if (ft_flag(main->va, str - len, &manag, main))
				return (-1);
			ret = manag_type[flag](manag, main);
			return (ret == -1) ? -1 : len + 2;
		}
		if (*str != ' ' && !ft_isok(*str))
			return (len + 1);
		len++;
		str += 1;
	}
	return (-1);
}

int			ft_initprintf(char *str, t_main *main)
{
	size_t	i;
	int		ret;

	i = 0;
	while (str[i] != '%' && str[i])
		i++;
	if (str[i] == '%')
	{
		if (ft_mallocage(main, str, i) == -1)
			return (-1);
		ret = ft_initflag(&str[i + 1], main);
		if (ret == -1)
			return (-1);
		i += ret;
	}
	else
	{
		if (ft_mallocage(main, str, i) == -1)
			return (-1);
		return (0);
	}
	return (ft_initprintf(&str[i], main));
}

int			ft_printf(const char *str, ...)
{
	int		ret;
	char	*ptr;
	t_main	main;

	if (!str)
		return (-1);
	ptr = ft_strdup(str);
	if (ptr == NULL)
		return (-1);
	main.ret = ft_strdup("");
	if (main.ret == NULL)
		return (-1);
	main.len = 0;
	va_start(main.va, str);
	ret = ft_initprintf(ptr, &main);
	va_end(main.va);
	free(ptr);
	if (ret == -1)
		return (ft_dealloc(main.ret));
	write(1, main.ret, main.len);
	ft_dealloc(main.ret);
	return ((int)main.len);
}
