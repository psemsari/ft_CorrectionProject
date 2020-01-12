#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int ret;
	ret = printf("'%10d%5c%-5.0s'\n", 42, '4', "42 born 2 code");
	printf("%d", ret);


	return (0);
}
