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
}
