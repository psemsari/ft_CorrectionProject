/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:11:39 by psemsari          #+#    #+#             */
/*   Updated: 2020/01/07 12:15:01 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct	s_manag
{
	int			prec;
	int			space;
	int			zero;
	int			egale;
}				t_manag;

typedef struct	s_main
{
	char		*ret;
	size_t		len;
	va_list		va;
}				t_main;

typedef int		(*t_ptrtype)(t_manag, t_main *);

int				ft_isok(char c);
int				specialspace(char *str, int *i, t_main *main);
int				ft_flag(va_list va, char *str, t_manag *man, t_main *main);
int				ft_isflag(char c);
int				ft_space(t_manag manag, t_main *main);
int				ft_mallocage(t_main *main, char *str, size_t len);
char			*ft_strrep(char c, int nb);
void			ft_calculnbs(t_manag *manag, int nbdigit, int neg);
int				ft_dealloc(char *malloc);
char			*ft_itohexprec(unsigned int n, int prec);
int				ft_managxu(t_manag manag, t_main *main);
int				ft_managx(t_manag manag, t_main *main);
int				ft_managuint(t_manag manag, t_main *main);
int				ft_managptr(t_manag manag, t_main *main);
int				ft_managchar(t_manag manag, t_main *main);
int				ft_managstr(t_manag manag, t_main *main);
int				ft_managper(t_manag manag, t_main *main);
int				ft_managint(t_manag manag, t_main *main);
int				ft_printf(const char *str, ...);

#endif
