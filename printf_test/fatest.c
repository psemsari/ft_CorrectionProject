/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:04 by abarot            #+#    #+#             */
/*   Updated: 2019/12/18 18:54:47 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	Creloudelirectroplongmerde(int ret1, int ret2)
{
	if (ret1 != ret2)
	{
		printf("ARRETEZ TOUT C'EST RATÉÉÉÉÉÉÉÉÉÉÉ, LÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀÀ, ICCCIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
	}
}

void	test1(void)
{
	int res1 = ft_printf("test without arg\n");
	int res2 = printf("test without arg\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test very long without arggggggggggggggggggggggggggggggg\n");
	res2 = printf("test very long without arggggggggggggggggggggggggggggggg\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("");
	res2 = printf("");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test if '\0'");
	res2 = printf("test if '\0'");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test2(void)
{
	int res1 = ft_printf("test string arg : %s\n", "abcde");
	int res2 = printf("test string arg : %s\n", "abcde");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test string arg : %s\n", "123456789");
	res2 = printf("test string arg : %s\n", "123456789");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test string multiple arg : %s %s\n", "123456789", "abcde");
	res2 = printf("test string multiple arg : %s %s\n", "123456789", "abcde");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	// res1 = ft_printf("test arg 0 : %s\n", 0);
	// res2 = printf("test arg 0 : %s\n\n", 0);
	// printf("res1 : %d, res2 : %d\n\n", res1, res2);
}

void	test3(void)
{
	int res1 = ft_printf("test min int arg : %d\n", -2147483648);
	int res2 = printf("test min int arg : %d\n", -2147483648);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test max int arg : %d\n", 2147483647);
	res2 = printf("test max int arg : %d\n", 2147483647);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test too long int arg : %d\n", 214748364799);
	res2 = printf("test too long int arg : %d\n", 214748364799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test arg 0 : %d\n", 0);
	res2 = printf("test arg 0 : %d\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test4()
{
    int res1 = ft_printf("test character 1 arg : %c\n", 'a');
    int res2 = printf("test character 1 arg : %c\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test character 1 arg : %c\n", 97);
	res2 = printf("test character 1 arg : %c\n", 97);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test character multiple arg : %c %c\n", 97, 48);
	res2 = printf("test character multiple arg : %c %c\n", 97, 48);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test arg 0 : %c\n", 0);
	res2 = printf("test arg 0 : %c\n", 0);
	printf("res1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test5()
{
    int res1 = ft_printf("test min int arg : %i\n", -2147483648);
	int res2 = printf("test min int arg : %i\n", -2147483648);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test max int arg : %i\n", 2147483647);
	res2 = printf("test max int arg : %i\n", 2147483647);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test too long int arg : %i\n", 214748364799);
	res2 = printf("test too long int arg : %i\n", 214748364799);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test arg 0 : %i\n", 0);
	res2 = printf("test arg 0 : %i\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test6()
{
    int res1 = ft_printf("test negative int arg : %u\n", -4294967295);
	int res2 = printf("test negative int arg : %u\n", -4294967295);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test max int arg : %u\n", 4294967295);
	res2 = printf("test max int arg : %u\n", 4294967295);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test too long int arg : %u\n", 214748364799);
	res2 = printf("test too long int arg : %u\n", 214748364799);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test arg 0 : %u\n", 0);
	res2 = printf("test arg 0 : %u\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test7()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    int res1 = ft_printf("test address of int : %p\n", &el1);
    int res2 = printf("test address of int : %p\n", &el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char* : %p\n", &el2);
    res2 = printf("test address of char* : %p\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char : %p\n", &el3);
	res2 = printf("test address of char : %p\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %p\n", &el4);
	res2 = printf("test address of char : %p\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address 0 : %p\n", 0);
	res2 = printf("test address 0 : %p\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address : %p\n", '\0');
	res2 = printf("test address : %p\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test8()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    int res1 = ft_printf("test address of int : %x\n", el1);
    int res2 = printf("test address of int : %x\n", el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char* : %x\n", &el2);
    res2 = printf("test address of char* : %x\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char : %x\n", &el3);
	res2 = printf("test address of char : %x\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %x\n", &el4);
	res2 = printf("test address of char : %x\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address 0 : %x\n", 0);
	res2 = printf("test address 0 : %x\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address : %x\n", '\0');
	res2 = printf("test address : %x\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test9()
{
    int     el1 = 58;
    char    *el2 = "0123456879";
    char    el3 = 'a';
    char    el4 = 97;
    int res1 = ft_printf("test address of int : %X\n", &el1);
    int res2 = printf("test address of int : %X\n", &el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char* : %X\n", &el2);
    res2 = printf("test address of char* : %X\n", &el2);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address of char : %X\n", &el3);
	res2 = printf("test address of char : %X\n", &el3);
	printf("\nres1 : %d, res2 : %u\n\n", res1, res2);
	res1 = ft_printf("test address of char : %X\n", &el4);
	res2 = printf("test address of char : %X\n", &el4);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address 0 : %X\n", 0);
	res2 = printf("test address 0 : %X\n", 0);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test address : %X\n", '\0');
	res2 = printf("test address : %X\n", '\0');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test10(void)
{
	int res1 = ft_printf("test %%\n");
	int res2 = printf("test %%\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test [%%]\n");
	res2 = printf("test [%%]\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test %%%% djlkjlkj\n");
	res2 = printf("test %%%% djlkjlkj\n");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test11(void)
{
	char el1 = '1';
	char *p_el1 = &el1;
	int res1 = ft_printf("test %d %i %s %c %u %x %X %p %%\n",
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1);
	int res2 = printf("test %d %i %s %c %u %x %X %p %%\n",
				-2147483648, -2147483648, "abcde", 'a', 4294967295, p_el1, p_el1, p_el1);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test12(void)
{
	int res1 = ft_printf("test -0 0 int : %-0d aaa\n", 2144);
	int res2 = printf("test -0 0 int : %-0d aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -4 0 int : %-04d aaa\n", 2144);
	res2 = printf("test -4 0 int : %-04d aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -6 0 int : %-06d aaa\n", 2144);
	res2 = printf("test -6 0 int : %-06d aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -10 0 int : %-010d aaa\n", 2144);
	res2 = printf("test -10 0 int : %-010d aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -20 0 int : %-0000010d aaa\n", 2144);
	res2 = printf("test -20 0 int : %-0000010d aaa\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -0 0 int : %-0d aaa\n", -2144);
	res2 = printf("test -0 0 int : %-0d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -4 0 int : %-04d aaa\n", -2144);
	res2 = printf("test -4 0 int : %-04d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -6 0 int : %-06d aaa\n", -2144);
	res2 = printf("test -6 0 int : %-06d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -10 0 int : %-010d aaa\n", -2144);
	res2 = printf("test -10 0 int : %-010d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -20 0 int : %-0000010d aaa\n", -2144);
	res2 = printf("test -20 0 int : %-0000010d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test13(void)
{
	int res1 = ft_printf("test 0 0 int : %0d\n", 2144);
	int res2 = printf("test 0 0 int : %0d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 0 int : %04d\n", 2144);
	res2 = printf("test 4 0 int : %04d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 0 int : %06d\n", 2144);
	res2 = printf("test 6 0 int : %06d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 10 0 int : %010d\n", 2144);
	res2 = printf("test 10 0 int : %010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 20 0 int : %0000010d\n", 2144);
	res2 = printf("test 20 0 int : %0000010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 0 0 int : %0d\n", -2144);
	res2 = printf("test 0 0 int : %0d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 0 int : %04d\n", -2144);
	res2 = printf("test 4 0 int : %04d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 0 int : %06d\n", -2144);
	res2 = printf("test 6 0 int : %06d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 10 0 int : %010d\n", -2144);
	res2 = printf("test 10 0 int : %010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 20 0 int : %0000010d\n", -2144);
	res2 = printf("test 20 0 int : %0000010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test14(void)
{
	int res1 = printf("test .0 int : %.0d aaa\n", -2144);
	int res2 = printf("test .0 int : %.0d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .4 int : %.4d aaa\n", -2144);
	res2 = printf("test .4 int : %.4d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .6 * int : %.6d aaa\n", -2144);
	res2 = printf("test .6 * int : %.6d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .8 * int : %.08d aaa\n", -2144);
	res2 = printf("test .8 * int : %.8d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -.0 int : %-.0d aaa\n", -2144);
	res2 = printf("test -.0 int : %-.0d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -.4 int : %-.4d aaa\n", -2144);
	res2 = printf("test -.4 int : %-.4d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -.6 * int : %-.6d aaa\n", -2144);
	res2 = printf("test -.6 * int : %-.6d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test -.8 * int : %-.8d aaa\n", -2144);
	res2 = printf("test -.8 * int : %-.8d aaa\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test int : %010.8d aaa\n", -21);
	res2 = printf("test int : %010.8d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test int : %010.2d aaa\n", -21);
	res2 = printf("test int : %010.2d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test int : %010.5d aaa\n", -21);
	res2 = printf("test int : %010.5d aaa\n", -21);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);

}

void	test15(void)
{
	int res1 = ft_printf("test 0 * int : %*d\n", 5, -2144);
	int res2 = printf("test 0 * int : %*d\n", 5, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 * int : %*d\n", 4, -2144);
	res2 = printf("test 4 * int : %*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 * int : %*d\n", 6, -2144);
	res2 = printf("test 6 * int : %*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 8 * int : %*d\n", 8, -2144);
	res2 = printf("test 8 * int : %*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 0 int : %.*d\n", 0, -2144);
	res2 = printf("test .* 0 int : %.*d\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 4 int : %.*d\n", 4, -2144);
	res2 = printf("test .* 4 int : %.*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 6 * int : %.*d\n", 6, -2144);
	res2 = printf("test .* 6 * int : %.*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 8 * int : %.*d\n", 8, -2144);
	res2 = printf("test .* 8 * int : %.*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test16(void)
{
	int res1 = ft_printf("test 0 * int : %*u\n", 0, -2144);
	int res2 = printf("test 0 * int : %*u\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 * int : %*u\n", 4, -2144);
	res2 = printf("test 4 * int : %*u\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 * int : %*d\n", 6, -2144);
	res2 = printf("test 6 * int : %*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 8 * int : %*d\n", 8, -2144);
	res2 = printf("test 8 * int : %*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 0 int : %.*d\n", 0, -2144);
	res2 = printf("test .* 0 int : %.*d\n", 0, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 4 int : %.*d\n", 4, -2144);
	res2 = printf("test .* 4 int : %.*d\n", 4, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 6 * int : %.*d\n", 6, -2144);
	res2 = printf("test .* 6 * int : %.*d\n", 6, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test .* 8 * int : %.*d\n", 8, -2144);
	res2 = printf("test .* 8 * int : %.*d\n", 8, -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test17(void)
{
	int res1 = ft_printf("test 0 0 int : %0d\n", 2144);
	int res2 = printf("test 0 0 int : %0d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 0 int : %04d\n", 2144);
	res2 = printf("test 4 0 int : %04d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 0 int : %06d\n", 2144);
	res2 = printf("test 6 0 int : %06d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 10 0 int : %010d\n", 2144);
	res2 = printf("test 10 0 int : %010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 20 0 int : %0000010d\n", 2144);
	res2 = printf("test 20 0 int : %0000010d\n", 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 0 0 int : %0d\n", -2144);
	res2 = printf("test 0 0 int : %0d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 4 0 int : %04d\n", -2144);
	res2 = printf("test 4 0 int : %04d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 6 0 int : %06d\n", -2144);
	res2 = printf("test 6 0 int : %06d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 10 0 int : %010d\n", -2144);
	res2 = printf("test 10 0 int : %010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("test 20 0 int : %0000010d\n", -2144);
	res2 = printf("test 20 0 int : %0000010d\n", -2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test18(void)
{
	int res1 = ft_printf("qsdqs %.**.-d qsdqsd\n", 10, 10, 2144);
	int res2 = printf("qsdqs %.-**.d qsdqsd\n", 10, 10, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.***  %.*d %d  qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %.***  %.*d %d  qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %*d %**d qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %*d %**d qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %***.*d qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %***.*d qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %*yolo qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %*yolo qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %..*yolo qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %..*yolo qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %..*dyolo qsdqsd\n", 1,2,3, 4, 2144);
	res2 = printf("qsdqs %..*dyolo qsdqsd\n", 1,2,3, 4, 2144);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test19(void)
{
	int res1 = ft_printf("qsdqs %4s qsdqsd\n", "bonjour");
	int res2 = printf("qsdqs %4s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.4s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %.4s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-4s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %-4s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-.4s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %-.4s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %04s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %04s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-0.4s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %-0.4s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %0.0s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %0.0s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.0s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %.0s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.8s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %8.8s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.0s qsdqsd\n", "bonjour");
	res2 = printf("qsdqs %8.0s qsdqsd\n", "bonjour");
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test20(void)
{
	int res1 = ft_printf("qsdqs %4c qsdqsd\n", 'a');
	int res2 = printf("qsdqs %4c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.4c qsdqsd\n", 'a');
	res2 = printf("qsdqs %.4c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-4c qsdqsd\n", 'a');
	res2 = printf("qsdqs %-4c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-.4c qsdqsd\n", 'a');
	res2 = printf("qsdqs %-.4c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %04c qsdqsd\n", 'a');
	res2 = printf("qsdqs %04c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-0.4c qsdqsd\n", 'a');
	res2 = printf("qsdqs %-0.4c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %0.0c qsdqsd\n", 'a');
	res2 = printf("qsdqs %0.0c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.0c qsdqsd\n", 'a');
	res2 = printf("qsdqs %.0c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("la ? %8.8c qsdqsd\n", 'a');
	res2 = printf("la ? %8.8c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.0c qsdqsd\n", 'a');
	res2 = printf("qsdqs %8.0c qsdqsd\n", 'a');
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test21(void)
{
	int el = 4052;
	int res1 = ft_printf("qsdqs %*p qsdqsd\n", 4, &el);
	int res2 = printf("qsdqs %*p qsdqsd\n", 4, &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.4p qsdqsd\n", &el);
	res2 = printf("qsdqs %.4p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-4p qsdqsd\n", &el);
	res2 = printf("qsdqs %-4p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-20.20p qsdqsd\n", &el);
	res2 = printf("qsdqs %-20.20p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-0.0p qsdqsd\n", &el);
	res2 = printf("qsdqs %-0.0p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %04p qsdqsd\n", &el);
	res2 = printf("qsdqs %04p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %020.20p qsdqsd\n", &el);
	res2 = printf("qsdqs %020.20p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %0.0p qsdqsd\n", &el);
	res2 = printf("qsdqs %0.0p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.20p qsdqsd\n", &el);
	res2 = printf("qsdqs %.20p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %20.p qsdqsd\n", &el);
	res2 = printf("qsdqs %20.p qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.8ppqsdqsd\n", &el);
	res2 = printf("qsdqs %8.8ppqsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test22(void)
{
	int el = 4052;
	int res1 = ft_printf("qsdqs %*X qsdqsd\n", 4, &el);
	int res2 = printf("qsdqs %*X qsdqsd\n", 4, &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.4X qsdqsd\n", &el);
	res2 = printf("qsdqs %.4X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-4X qsdqsd\n", &el);
	res2 = printf("qsdqs %-4X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-20.20X qsdqsd\n", &el);
	res2 = printf("qsdqs %-20.20X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-0.0X qsdqsd\n", &el);
	res2 = printf("qsdqs %-0.0X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %04X qsdqsd\n", &el);
	res2 = printf("qsdqs %04X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %020.20X qsdqsd\n", &el);
	res2 = printf("qsdqs %020.20X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %0.0X qsdqsd\n", &el);
	res2 = printf("qsdqs %0.0X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.20X qsdqsd\n", &el);
	res2 = printf("qsdqs %.20X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %20.X qsdqsd\n", &el);
	res2 = printf("qsdqs %20.X qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.8Xpqsdqsd\n", &el);
	res2 = printf("qsdqs %8.8Xpqsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test23(void)
{
	int el = 4052;
	int res1 = ft_printf("qsdqs %*x qsdqsd\n", 4, &el);
	int res2 = printf("qsdqs %*x qsdqsd\n", 4, &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.4x qsdqsd\n", &el);
	res2 = printf("qsdqs %.4x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-4x qsdqsd\n", &el);
	res2 = printf("qsdqs %-4x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-20.20x qsdqsd\n", &el);
	res2 = printf("qsdqs %-20.20x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %-0.0x qsdqsd\n", &el);
	res2 = printf("qsdqs %-0.0x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %04x qsdqsd\n", &el);
	res2 = printf("qsdqs %04x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %020.20x qsdqsd\n", &el);
	res2 = printf("qsdqs %020.20x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %0.0x qsdqsd\n", &el);
	res2 = printf("qsdqs %0.0x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %.20x qsdqsd\n", &el);
	res2 = printf("qsdqs %.20x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %20.x qsdqsd\n", &el);
	res2 = printf("qsdqs %20.x qsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %8.8xpqsdqsd\n", &el);
	res2 = printf("qsdqs %8.8xpqsdqsd\n", &el);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
}

void	test24(void)
{
	int res1 = ft_printf("qsdqs %00d qsdqsd\n",  4280);
	int res2 = printf("qsdqs %00d qsdqsd\n",  4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %--d qsdqsd\n", 4280);
	res2 = printf("qsdqs %--d qsdqsd\n", 4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %..d qsdqsd\n",  4280);
	res2 = printf("qsdqs %..d qsdqsd\n",  4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);
	res1 = ft_printf("qsdqs %**d qsdqsd\n", 4, 5, 4280);
	res2 = printf("qsdqs %**d qsdqsd\n", 4, 5, 4280);
	printf("\nres1 : %d, res2 : %d\n\n", res1, res2);
	Creloudelirectroplongmerde(res1, res2);

}

int main()
{
	printf("test1, string simple :\n");
	test1();
	printf("\n\n------------\n\n");
	printf("test2, argument string :\n");
	test2();
	printf("\n\n------------\n\n");
	printf("test3, argument int d :\n");
	test3();
	printf("\n\n------------\n\n");
	printf("test4, argument char :\n");
	test4();
	printf("\n\n------------\n\n");
	printf("test5, argument int i :\n");
	test5();
	printf("\n\n------------\n\n");
	printf("test6, argument unsigned int :\n");
	test6();
	printf("\n\n------------\n\n");
	printf("test7, argument address :\n");
	test7();
	printf("\n\n------------\n\n");
	printf("test8, argument x :\n");
	test8();
	printf("\n\n------------\n\n");
	printf("test9, argument X :\n");
	test9();
	printf("\n\n------------\n\n");
	printf("test10, argument %% :\n");
	test10();
	printf("\n\n------------\n\n");
	printf("test11, all arguments type :\n");
	test11();
	printf("\n\n------------\n\n");
	printf("test12, flag - :\n");
	test12();
	printf("\n\n------------\n\n");
	printf("test13, flag 0 :\n");
	test13();
	printf("\n\n------------\n\n");
	printf("test14, flag . :\n");
	test14();
	printf("\n\n------------\n\n");
	printf("test15, flag * :\n");
	test15();
	printf("\n\n------------\n\n");
	printf("test16, flags 0-*. with unsigned int :\n");
	test16();
	printf("\n\n------------\n\n");
	printf("test17, flag 0 :\n");
	test17();
	printf("\n\n------------\n\n");
	printf("test18, flags random :\n");
	test18();
	printf("\n\n------------\n\n");
	printf("test19, flags string :\n");
	test19();
	printf("\n\n------------\n\n");
	printf("test20, flags char :\n");
	test20();
	printf("\n\n------------\n\n");
	printf("test21, flags address :\n");
	test21();
	printf("\n\n------------\n\n");
	printf("test22, flags X :\n");
	test22();
	printf("\n\n------------\n\n");
	printf("test23, flags x :\n");
	test23();
	printf("\n\n------------\n\n");
	printf("test24, multiflags --, 00, .. :\n");
	test24();
}