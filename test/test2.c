#include "../inc/libfts.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *a = "0";
	char *b = "This is ";
	char *c = "a string";
	/* printf("%s\n", strcat(b, c)); */
	/* printf("%s\n", ft_strcat(b, c)); */

	printf("%zu\n", ft_strlen(""));
	{
		char *str = (char *)malloc(sizeof(char) * 100);
		str[0] = 0;
		printf("%p\n", str);
		str = ft_strcat(str, b);
		printf("FT_ [%s]\n", str);
		printf("%p\n", str);
		str = ft_strcat(str, c);
		printf("FT_ [%s]\n", str);
		printf("%p\n", str);
	}
	{
		char *str = (char *)malloc(sizeof(char) * 100);
		str[0] = 0;
		str = strcat(str, b);
		str = strcat(str, c);
		printf("LIB [%s]\n", str);
	}
	{
		puts("");
		int ret = ft_puts("42");
		puts("");
		if (ret > 0)
			printf("(nonnegative value returned)");
		else if (ret < 0)
			printf("(negative value returned)");
		else
			printf("(returns 0)");
		printf("\n%d\n", ret);
	}
	{
		puts("");
		int ret = puts("42");
		puts("");
		if (ret > 0)
			printf("(nonnegative value returned)");
		else if (ret < 0)
			printf("(negative value returned)");
		else
			printf("(returns 0)");
		printf("\n%d\n", ret);
	}

	{
		char a[200];
		char *s = ft_memset(a, 'F', 20);
		printf("%p %p\n", a, s);
		printf("%s\n", s);
	}
	{
		char a[200];
		char *s = memset(a, 'F', 20);
		printf("%p %p\n", a, s);
		printf("%s\n", s);
	}
}
