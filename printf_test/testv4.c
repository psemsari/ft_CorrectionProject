/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testv4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:47:58 by vintz             #+#    #+#             */
/*   Updated: 2020/01/07 12:30:08 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define RESET "\033[0m"


// color tmp

#define ANSI_COLOR_RED     "\x1b[1;31m"
#define ANSI_COLOR_GREEN   "\x1b[1;32m"
#define ANSI_COLOR_YELLOW  "\x1b[1;33m"
#define ANSI_COLOR_BLUE    "\x1b[1;34m"
#define ANSI_COLOR_MAGENTA "\x1b[1;35m"
#define ANSI_COLOR_CYAN    "\x1b[1;36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


char	*str = "42Born2Code";
int 	test = 1;

int delay = 15000;//150000;

int RandomNumberGenerator(const int nMin, const int nMax, const int  nNumOfNumsToGenerate)
{
	int nRandonNumber = 0;
	for (int i = 0; i < nNumOfNumsToGenerate; i++)
	nRandonNumber = rand()%(nMax-nMin) + nMin;
	return (nRandonNumber);
}

void 	disp(char *str)
{
	test = 1;
	printf(GREEN);
	printf("\t\t#### %s ####\n", str);
	printf(RESET);
	printf("\n");
}

void 	ntst()
{
	usleep(delay);
	printf(BLUE);
	printf(" - test : %d\n", test);
	printf(RESET);
	printf("\n");
	++test;
}

void checkdiff(int ret1, int ret2)
{
	printf("\n=> ret1 = %d\n=> ret2 = %d\n\n", ret1, ret2);
	if (ret1 != ret2)
	{
		printf(RED);
		printf("\t\t#### ERROR ####");
		printf(RESET);
		printf("\n\n\n");
		printf("\n\n\n");
		getchar();
	}
	else
	return ;
}

void	checkdiff_errors(int ret1, int ret2)
{
	printf("\n=> ret1 = %d\n=> ret2 = %d\n\n", ret1, ret2);
	if (ret1 != -1)
	{
		printf(RED);
		printf("\t\t#### ERROR ####");
		printf(RESET);
		printf("\n\n\n");
		system("leaks a.out");
		printf("\n\n\n");
	}
	else
	return ;
}

void   a_s(int ret1, int ret2)
{
	// AFFICHAGE %s //

	disp("AFFICHAGE 's'");

	ntst();
	ret1 = ft_printf("'%s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%s'", "42\tborn\t2\tcode"); printf("\n");
	ret2 = printf("'%s'", "42\tborn\t2\tcode"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%s'", "          \t42\tborn\t2\tcode          "); printf("\n");
	ret2 = printf("'%s'", "          \t42\tborn\t2\tcode          "); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%20s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%20s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%40s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%40s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%1s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-20s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-20s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-40s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-40s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-1s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);



	ntst();
	ret1 = ft_printf("'%.10s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.10s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.1s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.1s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.15s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.15s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.17s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.17s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.24s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.24s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.50s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.50s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.0s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.0s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.1s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.1s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.2s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.2s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.3s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.3s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.4s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.4s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.10s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10.10s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.15s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10.15s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.25s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10.25s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%20.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%20.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.0s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10.0s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1.0s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%1.0s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%2.3s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%2.3s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%3.2s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%3.2s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%4.9s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%4.9s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%8.7s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%8.7s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-.1s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.1s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.2s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.2s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.3s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.3s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.4s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.4s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.10s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10.10s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.15s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10.15s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.25s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10.25s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-20.5s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-20.5s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.0s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10.0s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1.0s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-1.0s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-2.3s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-2.3s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-3.2s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-3.2s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-4.9s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-4.9s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-8.7s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-8.7s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*s'", 5 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*s'", 5 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*s'", 1 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*s'", 1 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*s'", 15 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*s'", 15 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*s'", 30 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*s'", 30 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);



	ntst();
	ret1 = ft_printf("'%.*s'", 10, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 10, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 1, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 1, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 15, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 15, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 17, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 17, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 24, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 24, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 50, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 50, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 0, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 0, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 1, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 1, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 2, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 2, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 3, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 3, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 4, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 4, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%.*s'", 5, "42 born 2 code"); printf("\n");
	ret2 = printf("'%.*s'", 5, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 10, 5, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 10, 5, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 10, 10 ,"42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 10, 10 ,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 10, 15, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 10, 15, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 10, 25, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 10, 25, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 20, 5, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 20, 5, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 10, 0, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 10, 0, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 1,0, "42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 1,0, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 2,3,"42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 2,3,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 3,2,"42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 3,2,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 4,9,"42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 4,9,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*.*s'", 8,7,"42 born 2 code"); printf("\n");
	ret2 = printf("'%*.*s'", 8,7,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-.*s'", 1, "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.*s'", 1, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.*s'", 2, "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.*s'", 2, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.*s'", 3, "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.*s'", 3, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.*s'", 4, "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.*s'", 4, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-.*s'", 5, "42 born 2 code"); printf("\n");
	ret2 = printf("'%-.*s'", 5, "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 10,5,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 10,5,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 10,10,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 10,10,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 10,15,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 10,15,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 10,25,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 10,25,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 20,5,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 20,5,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 10,0,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 10,0,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 1,0,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 1,0,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 2,3,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 2,3,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 3,2,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 3,2,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 4,9,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 4,9,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-*.*s'", 8,7,"42 born 2 code"); printf("\n");
	ret2 = printf("'%-*.*s'", 8,7,"42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%s'", NULL); printf("\n");
	ret2 = printf("'%s'", NULL); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #3 : OK");

}

void   a_p(int ret1, int ret2)
{
	// AFFICHAGE %s //

	disp("AFFICHAGE 'p'");

	ntst();
	ret1 = ft_printf("'%p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%p'", "42\tborn\t2\tcode"); printf("\n");
	ret2 = printf("'%p'", "42\tborn\t2\tcode"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%p'", "          \t42\tborn\t2\tcode          "); printf("\n");
	ret2 = printf("'%p'", "          \t42\tborn\t2\tcode          "); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%10p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%20p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%20p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%40p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%40p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%1p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-10p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-20p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-20p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-40p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-40p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-1p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-5p'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%-5p'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*p'", 5 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*p'", 5 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*p'", 1 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*p'", 1 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*p'", 15 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*p'", 15 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%*p'", 30 , "42 born 2 code"); printf("\n");
	ret2 = printf("'%*p'", 30 , "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%p'", NULL); printf("\n");
	ret2 = printf("'%p'", NULL); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #8 : OK");

}

void 	a_b(int ret1, int ret2)
{
	// AFFICHAGE BASIQUE //

	disp("AFFICHAGE BASIQUE");
	getchar();

	ntst();
	ret1 = ft_printf("");
	ret2 = printf("");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("''"); printf("\n");
	ret2 = printf("''"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'42 born 2 code'"); printf("\n");
	ret2 = printf("'42 born 2 code'"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'42\tborn\t{2}\t\t\t\t\tcode'"); printf("\n");
	ret2 = printf("'42\tborn\t{2}\t\t\t\t\tcode'"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'42          born          2          code'"); printf("\n");
	ret2 = printf("'42          born          2          code'"); printf("\n");
	checkdiff(ret1, ret2);
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'010'"); printf("\n");
	ret2 = printf("'010'"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'*'"); printf("\n");
	ret2 = printf("'*'"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'-10'"); printf("\n");
	ret2 = printf("'-10'"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'.5'"); printf("\n");
	ret2 = printf("'.5'"); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #1 : OK");
}

void 	a_c(int ret1, int ret2)
{
	// AFFICHAGE %c //

	disp("AFFICHAGE 'c'");
	getchar();

	ntst();
	ret1 = ft_printf("'%c'", 'c'); printf("\n");
	ret2 = printf("'%c'", 'c'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%c'", 0); printf("\n");
	ret2 = printf("'%c'", 0); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10c'", 'A'); printf("\n");
	ret2 = printf("'%10c'", 'A'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25c'", 'A'); printf("\n");
	ret2 = printf("'%25c'", 'A'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1c'", 'A'); printf("\n");
	ret2 = printf("'%1c'", 'A'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1c'", 0); printf("\n");
	ret2 = printf("'%1c'", 0); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10c'", 0); printf("\n");
	ret2 = printf("'%10c'", 0); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10c'", 'A'); printf("\n");
	ret2 = printf("'%-10c'", 'A'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25c'", 'A'); printf("\n");
	ret2 = printf("'%-25c'", 'A'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1c'", 0); printf("\n");
	ret2 = printf("'%-1c'", 0); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-4c'", 'C'); printf("\n");
	ret2 = printf("'%-4c'", 'C'); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%c'", 0); printf("\n");
	ret2 = printf("'%c'", 0); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #2 : OK");

}

void 	a_d(int ret1, int ret2)
{
	disp("AFFICHAGE 'd'");

	ntst();
	ret1 = ft_printf("'%d'", 42); printf("\n");
	ret2 = printf("'%d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%d'", -42); printf("\n");
	ret2 = printf("'%d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%d'", -2147483648); printf("\n");
	ret2 = printf("'%d'", -2147483648); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%d'", -2147483647); printf("\n");
	ret2 = printf("'%d'", -2147483647); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10d'", 42); printf("\n");
	ret2 = printf("'%10d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25d'", 42); printf("\n");
	ret2 = printf("'%25d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1d'", 42); printf("\n");
	ret2 = printf("'%1d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%2d'", 42); printf("\n");
	ret2 = printf("'%2d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%8d'", 42); printf("\n");
	ret2 = printf("'%8d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10d'", -42); printf("\n");
	ret2 = printf("'%10d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25d'", -42); printf("\n");
	ret2 = printf("'%25d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1d'", -42); printf("\n");
	ret2 = printf("'%1d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%2d'", -42); printf("\n");
	ret2 = printf("'%2d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%8d'", -42); printf("\n");
	ret2 = printf("'%8d'", -42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-10d'", 42); printf("\n");
	ret2 = printf("'%-10d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25d'", 42); printf("\n");
	ret2 = printf("'%-25d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1d'", 42); printf("\n");
	ret2 = printf("'%-1d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-2d'", 42); printf("\n");
	ret2 = printf("'%-2d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-8d'", 42); printf("\n");
	ret2 = printf("'%-8d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10d'", -42); printf("\n");
	ret2 = printf("'%-10d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25d'", -42); printf("\n");
	ret2 = printf("'%-25d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1d'", -42); printf("\n");
	ret2 = printf("'%-1d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-2d'", -42); printf("\n");
	ret2 = printf("'%-2d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-8d'", -42); printf("\n");
	ret2 = printf("'%-8d'", -42); printf("\n");




	ntst();
	ret1 = ft_printf("'%10.5d'", 42); printf("\n");
	ret2 = printf("'%10.5d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25.4d'", 42); printf("\n");
	ret2 = printf("'%25.4d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1.2d'", 42); printf("\n");
	ret2 = printf("'%1.2d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%2.2d'", 42); printf("\n");
	ret2 = printf("'%2.2d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%8.1d'", 42); printf("\n");
	ret2 = printf("'%8.1d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%10.16d'", -42); printf("\n");
	ret2 = printf("'%10.16d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25.12d'", -42); printf("\n");
	ret2 = printf("'%25.12d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%1.3d'", -42); printf("\n");
	ret2 = printf("'%1.3d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%2.6d'", -42); printf("\n");
	ret2 = printf("'%2.6d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%8.1d'", -42); printf("\n");
	ret2 = printf("'%8.1d'", -42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-10.2d'", 42); printf("\n");
	ret2 = printf("'%-10.2d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25.6d'", 42); printf("\n");
	ret2 = printf("'%-25.6d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1.5d'", 42); printf("\n");
	ret2 = printf("'%-1.5d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-2.3d'", 42); printf("\n");
	ret2 = printf("'%-2.3d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-8.8d'", 42); printf("\n");
	ret2 = printf("'%-8.8d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-10.6d'", -42); printf("\n");
	ret2 = printf("'%-10.6d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25.2d'", -42); printf("\n");
	ret2 = printf("'%-25.2d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-1.0d'", -42); printf("\n");
	ret2 = printf("'%-1.0d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-2.0d'", -42); printf("\n");
	ret2 = printf("'%-2.0d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-8.1d'", -42); printf("\n");
	ret2 = printf("'%-8.1d'", -42); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #4 : OK");
}

void a_u(int ret1, int ret2)
{
	disp("AFFICHAGE 'u'");

	ntst();
	ret1 = ft_printf("'%u'", 42); printf("\n");
	ret2 = printf("'%u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", 424); printf("\n");
	ret2 = printf("'%u'", 424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", 4242); printf("\n");
	ret2 = printf("'%u'", 4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", 42424); printf("\n");
	ret2 = printf("'%u'", 42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", 424242); printf("\n");
	ret2 = printf("'%u'", 424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", 42424242); printf("\n");
	ret2 = printf("'%u'", 42424242); printf("\n");
	checkdiff(ret1, ret2);

	// next //


	ntst();
	ret1 = ft_printf("'%u'", -42); printf("\n");
	ret2 = printf("'%u'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", -424); printf("\n");
	ret2 = printf("'%u'", -424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", -4242); printf("\n");
	ret2 = printf("'%u'", -4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", -42424); printf("\n");
	ret2 = printf("'%u'", -42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", -424242); printf("\n");
	ret2 = printf("'%u'", -424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%u'", -42424242); printf("\n");
	ret2 = printf("'%u'", -42424242); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%1u'", 42); printf("\n");
	ret2 = printf("'%1u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%2u'", 42); printf("\n");
	ret2 = printf("'%2u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%3u'", 42); printf("\n");
	ret2 = printf("'%3u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%4u'", 42); printf("\n");
	ret2 = printf("'%4u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%5u'", 42); printf("\n");
	ret2 = printf("'%5u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%6u'", 42); printf("\n");
	ret2 = printf("'%6u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%7u'", 42); printf("\n");
	ret2 = printf("'%7u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%8u'", 42); printf("\n");
	ret2 = printf("'%8u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%9u'", 42); printf("\n");
	ret2 = printf("'%9u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%10u'", 42); printf("\n");
	ret2 = printf("'%10u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25u'", 42); printf("\n");
	ret2 = printf("'%25u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%-1u'", 42); printf("\n");
	ret2 = printf("'%-1u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-2u'", 42); printf("\n");
	ret2 = printf("'%-2u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-3u'", 42); printf("\n");
	ret2 = printf("'%-3u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-4u'", 42); printf("\n");
	ret2 = printf("'%-4u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-5u'", 42); printf("\n");
	ret2 = printf("'%-5u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-6u'", 42); printf("\n");
	ret2 = printf("'%-6u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-7u'", 42); printf("\n");
	ret2 = printf("'%-7u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-8u'", 42); printf("\n");
	ret2 = printf("'%-8u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-9u'", 42); printf("\n");
	ret2 = printf("'%-9u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-10u'", 42); printf("\n");
	ret2 = printf("'%-10u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25u'", 42); printf("\n");
	ret2 = printf("'%-25u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%01u'", 42); printf("\n");
	ret2 = printf("'%01u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%02u'", 42); printf("\n");
	ret2 = printf("'%02u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%03u'", 42); printf("\n");
	ret2 = printf("'%03u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%04u'", 42); printf("\n");
	ret2 = printf("'%04u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%05u'", 42); printf("\n");
	ret2 = printf("'%05u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%06u'", 42); printf("\n");
	ret2 = printf("'%06u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%07u'", 42); printf("\n");
	ret2 = printf("'%07u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%08u'", 42); printf("\n");
	ret2 = printf("'%08u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%09u'", 42); printf("\n");
	ret2 = printf("'%09u'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%010u'", 42); printf("\n");
	ret2 = printf("'%010u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%025u'", 42); printf("\n");
	ret2 = printf("'%025u'", 42); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #5 : OK");
}

void a_x(int ret1, int ret2)
{
	disp("AFFICHAGE 'x'");

	ntst();
	ret1 = ft_printf("'%x'", 42); printf("\n");
	ret2 = printf("'%x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", 424); printf("\n");
	ret2 = printf("'%x'", 424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", 4242); printf("\n");
	ret2 = printf("'%x'", 4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", 42424); printf("\n");
	ret2 = printf("'%x'", 42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", 424242); printf("\n");
	ret2 = printf("'%x'", 424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", 42424242); printf("\n");
	ret2 = printf("'%x'", 42424242); printf("\n");
	checkdiff(ret1, ret2);

	// next //


	ntst();
	ret1 = ft_printf("'%x'", -42); printf("\n");
	ret2 = printf("'%x'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", -424); printf("\n");
	ret2 = printf("'%x'", -424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", -4242); printf("\n");
	ret2 = printf("'%x'", -4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", -42424); printf("\n");
	ret2 = printf("'%x'", -42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", -424242); printf("\n");
	ret2 = printf("'%x'", -424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%x'", -42424242); printf("\n");
	ret2 = printf("'%x'", -42424242); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%1x'", 42); printf("\n");
	ret2 = printf("'%1x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%2x'", 42); printf("\n");
	ret2 = printf("'%2x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%3x'", 42); printf("\n");
	ret2 = printf("'%3x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%4x'", 42); printf("\n");
	ret2 = printf("'%4x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%5x'", 42); printf("\n");
	ret2 = printf("'%5x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%6x'", 42); printf("\n");
	ret2 = printf("'%6x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%7x'", 42); printf("\n");
	ret2 = printf("'%7x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%8x'", 42); printf("\n");
	ret2 = printf("'%8x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%9x'", 42); printf("\n");
	ret2 = printf("'%9x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%10x'", 42); printf("\n");
	ret2 = printf("'%10x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25x'", 42); printf("\n");
	ret2 = printf("'%25x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%-1x'", 42); printf("\n");
	ret2 = printf("'%-1x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-2x'", 42); printf("\n");
	ret2 = printf("'%-2x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-3x'", 42); printf("\n");
	ret2 = printf("'%-3x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-4x'", 42); printf("\n");
	ret2 = printf("'%-4x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-5x'", 42); printf("\n");
	ret2 = printf("'%-5x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-6x'", 42); printf("\n");
	ret2 = printf("'%-6x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-7x'", 42); printf("\n");
	ret2 = printf("'%-7x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-8x'", 42); printf("\n");
	ret2 = printf("'%-8x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-9x'", 42); printf("\n");
	ret2 = printf("'%-9x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-10x'", 42); printf("\n");
	ret2 = printf("'%-10x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25x'", 42); printf("\n");
	ret2 = printf("'%-25x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// next //

	ntst();
	ret1 = ft_printf("'%01x'", 42); printf("\n");
	ret2 = printf("'%01x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%02x'", 42); printf("\n");
	ret2 = printf("'%02x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%03x'", 42); printf("\n");
	ret2 = printf("'%03x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%04x'", 42); printf("\n");
	ret2 = printf("'%04x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%05x'", 42); printf("\n");
	ret2 = printf("'%05x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%06x'", 42); printf("\n");
	ret2 = printf("'%06x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%07x'", 42); printf("\n");
	ret2 = printf("'%07x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%08x'", 42); printf("\n");
	ret2 = printf("'%08x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%09x'", 42); printf("\n");
	ret2 = printf("'%09x'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%010x'", 42); printf("\n");
	ret2 = printf("'%010x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%025x'", 42); printf("\n");
	ret2 = printf("'%025x'", 42); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #6 : OK");
}

void a_X(int ret1, int ret2)
{
	disp("AFFICHAGE 'x'");

	ntst();
	ret1 = ft_printf("'%X'", 42); printf("\n");
	ret2 = printf("'%X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", 424); printf("\n");
	ret2 = printf("'%X'", 424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", 4242); printf("\n");
	ret2 = printf("'%X'", 4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", 42424); printf("\n");
	ret2 = printf("'%X'", 42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", 424242); printf("\n");
	ret2 = printf("'%X'", 424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", 42424242); printf("\n");
	ret2 = printf("'%X'", 42424242); printf("\n");
	checkdiff(ret1, ret2);

	// neXt //


	ntst();
	ret1 = ft_printf("'%X'", -42); printf("\n");
	ret2 = printf("'%X'", -42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", -424); printf("\n");
	ret2 = printf("'%X'", -424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", -4242); printf("\n");
	ret2 = printf("'%X'", -4242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", -42424); printf("\n");
	ret2 = printf("'%X'", -42424); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", -424242); printf("\n");
	ret2 = printf("'%X'", -424242); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%X'", -42424242); printf("\n");
	ret2 = printf("'%X'", -42424242); printf("\n");
	checkdiff(ret1, ret2);

	// neXt //

	ntst();
	ret1 = ft_printf("'%1X'", 42); printf("\n");
	ret2 = printf("'%1X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%2X'", 42); printf("\n");
	ret2 = printf("'%2X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%3X'", 42); printf("\n");
	ret2 = printf("'%3X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%4X'", 42); printf("\n");
	ret2 = printf("'%4X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%5X'", 42); printf("\n");
	ret2 = printf("'%5X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%6X'", 42); printf("\n");
	ret2 = printf("'%6X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%7X'", 42); printf("\n");
	ret2 = printf("'%7X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%8X'", 42); printf("\n");
	ret2 = printf("'%8X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%9X'", 42); printf("\n");
	ret2 = printf("'%9X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%10X'", 42); printf("\n");
	ret2 = printf("'%10X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%25X'", 42); printf("\n");
	ret2 = printf("'%25X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// neXt //

	ntst();
	ret1 = ft_printf("'%-1X'", 42); printf("\n");
	ret2 = printf("'%-1X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-2X'", 42); printf("\n");
	ret2 = printf("'%-2X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-3X'", 42); printf("\n");
	ret2 = printf("'%-3X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-4X'", 42); printf("\n");
	ret2 = printf("'%-4X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-5X'", 42); printf("\n");
	ret2 = printf("'%-5X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-6X'", 42); printf("\n");
	ret2 = printf("'%-6X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-7X'", 42); printf("\n");
	ret2 = printf("'%-7X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-8X'", 42); printf("\n");
	ret2 = printf("'%-8X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-9X'", 42); printf("\n");
	ret2 = printf("'%-9X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%-10X'", 42); printf("\n");
	ret2 = printf("'%-10X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%-25X'", 42); printf("\n");
	ret2 = printf("'%-25X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	// neXt //

	ntst();
	ret1 = ft_printf("'%01X'", 42); printf("\n");
	ret2 = printf("'%01X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%02X'", 42); printf("\n");
	ret2 = printf("'%02X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%03X'", 42); printf("\n");
	ret2 = printf("'%03X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%04X'", 42); printf("\n");
	ret2 = printf("'%04X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%05X'", 42); printf("\n");
	ret2 = printf("'%05X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%06X'", 42); printf("\n");
	ret2 = printf("'%06X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%07X'", 42); printf("\n");
	ret2 = printf("'%07X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%08X'", 42); printf("\n");
	ret2 = printf("'%08X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%09X'", 42); printf("\n");
	ret2 = printf("'%09X'", 42); printf("\n");
	checkdiff(ret1, ret2);


	ntst();
	ret1 = ft_printf("'%010X'", 42); printf("\n");
	ret2 = printf("'%010X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%025X'", 42); printf("\n");
	ret2 = printf("'%025X'", 42); printf("\n");
	checkdiff(ret1, ret2);

	disp("Part #7 : OK");
}

void a_mod(int ret1, int ret2)
{
	disp("AFFICHAGE '%'");

	ntst();
	ret1 = ft_printf("'%d'", 42); printf("\n");
	ret2 = printf("'%d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%d'", 42); printf("\n");
	ret2 = printf("'%%d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%%%%d'", 42); printf("\n");
	ret2 = printf("'%%%%%d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%%%%%%%%%d'", 42); printf("\n");
	ret2 = printf("'%%%%%%%%%%d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%%%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	ret2 = printf("'%%%%%%%%%%%%s'", "42 born 2 code"); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'% QWERTY d'", 42); printf("\n");
	ret2 = printf("'% QWERTY d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%    Q   W  E  R  T  Y    d'", 42); printf("\n");
	ret2 = printf("'%    Q   W  E  R  T  Y    d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%kkkkkd'", 42); printf("\n");
	ret2 = printf("'%kkkkkd'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'% k     d'", 42); printf("\n");
	ret2 = printf("'% k     d'", 42); printf("\n");
	checkdiff(ret1, ret2);

	ntst();
	ret1 = ft_printf("'%      d'", 42); printf("\n");
	ret2 = printf("'%      d'", 42); printf("\n");
	checkdiff(ret1, ret2);
}

void tests_long(int ret1, int ret2)
{
	int max = 100;

	disp("Tests long 'c'");
	getchar();

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "c'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, '2'); printf("\n");
		ret2 = printf(str, '2'); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "c'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, '2'); printf("\n");
		ret2 = printf(str, '2'); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	disp("Tests long 's'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%*");
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, i, "42 born 2 code"); printf("\n");
		ret2 = printf(str, i, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-*");
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, i, "42 born 2 code"); printf("\n");
		ret2 = printf(str, i, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%*");
		str = strcat(str, ".*");
		str = strcat(str, "s'");
		int itmp = i / 4;

		printf("str test = %s with {%d} & {%d}\n", str, i, itmp);
		ntst();
		ret1 = ft_printf(str, i, itmp, "42 born 2 code"); printf("\n");
		ret2 = printf(str, i, itmp, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i3);
		str = strcat(str, ".");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i3);
		str = strcat(str, ".");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i3);
		str = strcat(str, ".");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	disp("Tests long 'd'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -42); printf("\n");
		ret2 = printf(str, -42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -424242); printf("\n");
		ret2 = printf(str, -424242); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, -2147483648); printf("\n");
		ret2 = printf(str, -2147483648); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "d'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 2147483647); printf("\n");
		ret2 = printf(str, 2147483647); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}



	disp("Tests long 'x'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	disp("Tests long 'x'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "x'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}


	disp("Tests long 'X'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 2);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(-9999, 9999, 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 8);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "X'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n); printf("\n");
		ret2 = printf(str, n); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}



	disp("Tests long 'p'");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, &str); printf("\n");
		ret2 = printf(str, &str); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, &str); printf("\n");
		ret2 = printf(str, &str); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%*");
		// str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, i, &str); printf("\n");
		ret2 = printf(str, i, &str); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%-*");
		// str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, i, &str); printf("\n");
		ret2 = printf(str, i, &str); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}



	disp("Tests long '%'");
	getchar();

	for (int i = 0; i <= max; i++)
	{
		int n = 0;
		int nmax = 1;
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		str = strcat(str, "'");
		while (n <= i)
		{
			str = strcat(str, "%");
			++n;
		}
		// str = strcat(str, i2);
		str = strcat(str, "d'");
		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 42); printf("\n");
		ret2 = printf(str, 42); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		int n = 0;
		int nmax = 1;
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		str = strcat(str, "'");
		while (n <= i)
		{
			str = strcat(str, "%");
			++n;
		}
		// str = strcat(str, i2);
		str = strcat(str, "s'");
		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, "42 born 2 code"); printf("\n");
		ret2 = printf(str, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		int n = 0;
		int nmax = 1;
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		str = strcat(str, "'");
		while (n <= i)
		{
			str = strcat(str, "%");
			++n;
		}
		// str = strcat(str, i2);
		str = strcat(str, "x'");
		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, 15555); printf("\n");
		ret2 = printf(str, 15555); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

}

void tests_composes(int ret1, int ret2)
{
	int max = 100;

	disp("Tests composes {ALL}");
	getchar();
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);

		str = strcat(str, "'%");
		str = strcat(str, i2);
		str = strcat(str, "d");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "c");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, c, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, c, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}

	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, "d");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "c");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, c, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, c, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, "d");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "c");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, c, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, c, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *i4 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);
		i3 = ft_itoa(i / 6);
		i4 = ft_itoa(i / 2);

		str = strcat(str, "'%-");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i4);
		str = strcat(str, "d");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "c");
		str = strcat(str, " %-");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "s'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, c, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, c, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		// int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *i4 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);
		i3 = ft_itoa(i / 6);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i4);
		str = strcat(str, "d");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "x");
		str = strcat(str, " %-");
		str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, n, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, n, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
	for (int i = 0; i <= max; i++)
	{
		int n = RandomNumberGenerator(0, 9999, 10);
		// int c = RandomNumberGenerator('a', 'z', 10);
		char *i2 = malloc(sizeof(char) * 2);
		char *i3 = malloc(sizeof(char) * 2);
		char *i4 = malloc(sizeof(char) * 2);
		char *str = calloc(100, sizeof(char));
		i2 = ft_itoa(i);
		i3 = ft_itoa(i / 4);
		i3 = ft_itoa(i / 6);

		str = strcat(str, "'%0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i4);
		str = strcat(str, "d");
		str = strcat(str, " %0");
		str = strcat(str, i2);
		str = strcat(str, ".");
		str = strcat(str, i3);
		str = strcat(str, "X");
		str = strcat(str, " %");
		str = strcat(str, i2);
		str = strcat(str, "p'");

		printf("str test = %s\n", str);
		ntst();
		ret1 = ft_printf(str, n, n, "42 born 2 code"); printf("\n");
		ret2 = printf(str, n, n, "42 born 2 code"); printf("\n");
		checkdiff(ret1, ret2);
		free (i2);
		free (str);
	}
}

int		main()//int ac, char **av)
{

	int 	ret1 = 0;
	int 	ret2 = 0;

	srand(time(NULL));

	system("clear");
	printf("\n\n\n");

	// test prioritaires //

	//
	// return (0);

	// tests globaux	//

	getchar();
	a_b(ret1, ret2);
	getchar();
	a_c(ret1, ret2);
	getchar();
	a_s(ret1, ret2);
	getchar();
	a_d(ret1, ret2);
	getchar();
	a_u(ret1, ret2);
	getchar();
	a_x(ret1, ret2);
	getchar();
	a_X(ret1, ret2);
	getchar();
	a_p(ret1, ret2);
	getchar();
	a_mod(ret1, ret2);

	system("leaks ft_printf");


	getchar();
	tests_long(ret1, ret2);
	getchar();
	tests_composes(ret1, ret2);

	printf("\n\n\n");
	system("leaks a.out");
	return(0);
}

/*
A faire :

ac : cspdiuxX%

- c : char
- s : char *
- p : pointeur, void*
- d : int
- i : int
- u : unsigned int
- x : hexa lower
- X : HEXA upper
- % : afficher moulo apres un modulo

*/
