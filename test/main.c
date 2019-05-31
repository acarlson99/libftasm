#include "../inc/libfts.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>

#define FUNNAMELEN 10
#define PARAMNAMELEN 10
#define CAT(a,b) (a ## b)
#define TEST(s, f, c, ...) printf("%-*s %-*s = "s" = "s"\n", FUNNAMELEN, #f, PARAMNAMELEN, #__VA_ARGS__, f(__VA_ARGS__), c(__VA_ARGS__)); assert(f(__VA_ARGS__) == c(__VA_ARGS__))

int main() {
	printf("ISALPHA\n");
	TEST("%i", ft_isalpha, isalpha, 'a');
	TEST("%i", ft_isalpha, isalpha, 'a'-1);
	TEST("%i", ft_isalpha, isalpha, 'z');
	TEST("%i", ft_isalpha, isalpha, 'z'+1);
	TEST("%i", ft_isalpha, isalpha, 'A');
	TEST("%i", ft_isalpha, isalpha, 'A'-1);
	TEST("%i", ft_isalpha, isalpha, 'Z');
	TEST("%i", ft_isalpha, isalpha, 'Z'+1);
	TEST("%i", ft_isalpha, isalpha, '9');
	TEST("%i", ft_isalpha, isalpha, '.');

	printf("ISDIGIT\n");
	TEST("%i", ft_isdigit, isdigit, 'z');
	TEST("%i", ft_isdigit, isdigit, '0');
	TEST("%i", ft_isdigit, isdigit, '0'-1);
	TEST("%i", ft_isdigit, isdigit, '9');
	TEST("%i", ft_isdigit, isdigit, '9'+1);

	printf("ISALNUM\n");
	TEST("%i", ft_isalnum, isalnum, 16);
	TEST("%i", ft_isalnum, isalnum, 'a');
	TEST("%i", ft_isalnum, isalnum, 'a'-1);
	TEST("%i", ft_isalnum, isalnum, 'z');
	TEST("%i", ft_isalnum, isalnum, 'z'+1);
	TEST("%i", ft_isalnum, isalnum, 'A');
	TEST("%i", ft_isalnum, isalnum, 'A'-1);
	TEST("%i", ft_isalnum, isalnum, 'Z');
	TEST("%i", ft_isalnum, isalnum, 'Z'+1);
	TEST("%i", ft_isalnum, isalnum, '9');
	TEST("%i", ft_isalnum, isalnum, '.');
	TEST("%i", ft_isalnum, isalnum, 'z');
	TEST("%i", ft_isalnum, isalnum, '0');
	TEST("%i", ft_isalnum, isalnum, '0'-1);
	TEST("%i", ft_isalnum, isalnum, '9');
	TEST("%i", ft_isalnum, isalnum, '9'+1);

	printf("ISASCII\n");
	TEST("%i", ft_isascii, isascii, 'z');
	TEST("%i", ft_isascii, isascii, '9');
	TEST("%i", ft_isascii, isascii, 0x7f);
	TEST("%i", ft_isascii, isascii, 0x80);
	TEST("%i", ft_isascii, isascii, 0);
	TEST("%i", ft_isascii, isascii, -1);

	printf("ISPRINT\n");
	TEST("%i", ft_isprint, isprint, '~');
	TEST("%i", ft_isprint, isprint, '~'+1);
	TEST("%i", ft_isprint, isprint, ' ');
	TEST("%i", ft_isprint, isprint, ' '-1);
	TEST("%i", ft_isprint, isprint, 100);
	TEST("%i", ft_isprint, isprint, '9');

	printf("TOUPPER\n");
	TEST("%c", ft_toupper, toupper, 'a');
	TEST("%c", ft_toupper, toupper, 'a'-1);
	TEST("%c", ft_toupper, toupper, 'z');
	TEST("%c", ft_toupper, toupper, 'z'+1);
	TEST("%c", ft_toupper, toupper, 'A');
	TEST("%c", ft_toupper, toupper, 'A'-1);
	TEST("%c", ft_toupper, toupper, 'Z');
	TEST("%c", ft_toupper, toupper, 'Z'+1);

	printf("TOLOWER\n");
	TEST("%c", ft_toupper, toupper, 'a');
	TEST("%c", ft_toupper, toupper, 'a'-1);
	TEST("%c", ft_toupper, toupper, 'z');
	TEST("%c", ft_toupper, toupper, 'z'+1);
	TEST("%c", ft_toupper, toupper, 'A');
	TEST("%c", ft_toupper, toupper, 'A'-1);
	TEST("%c", ft_toupper, toupper, 'Z');
	TEST("%c", ft_toupper, toupper, 'Z'+1);

	printf("STRLEN\n");
	TEST("%zu", ft_strlen, strlen, "abc def ghi");
	TEST("%zu", ft_strlen, strlen, "");

	printf("PUTS\n");
	printf("%d\n", puts("A"));
	printf("%d\n", puts(""));
	printf("%d\n", puts("A"));
	printf("%d\n", puts("A"));
	printf("%d\n", puts(""));
	printf("%d\n", puts("A"));

	puts("--------");

	printf("%d\n", ft_puts("A"));
	printf("%d\n", ft_puts(""));
	printf("%d\n", ft_puts("A"));
	printf("%d\n", ft_puts("A"));
	printf("%d\n", ft_puts(""));
	printf("%d\n", ft_puts("A"));
	TEST("[%d]", ft_puts, puts, "");

	char a[] = "abc def ghi";
	char b[] = "abc def ghi";
	printf("%s\n", memset(a, 'f', 0));
	printf("%s\n", ft_memset(b, 'f', 0));
	printf("%s\n", memset(a+4, 'f', 3));
	printf("%s\n", ft_memset(b+4, 'f', 3));

	bzero(a, 10);
	ft_bzero(b, 10);

	for (int i = 0; i < 11; ++i) {
		printf("%d %d\n", i[a], i[b]);
		assert(i[a] == i[b]);
	}

	char *c = "AAaAAAA  B";
	printf("%s\n", memcpy(a, c, 10));
	printf("%s\n", ft_memcpy(a, c, 10));

	char d[100] = "";
	char e[100] = "";
	char *end = "a string\000000000000";

	char *ss = strcat(strcat(d, "This is "), "a string");
	printf("%s\n", ss);
	char *s = ft_strcat(ft_strcat(e, "This is "), "a string");
	printf("%s\n", s);

	strcat(ss, "");
	printf("%s\n", ss);
	ft_strcat(s, "");
	printf("%s\n", s);

	char *f = "abc def\0NOOOOOOOOOOOOOOOOOOOOOOOOOOOOO";

	ss = strdup(f);
	printf("\n%s\n", ss);
	s = ft_strdup(f);
	printf("%s\n", s);

	fflush(stdout);

	int fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);

	fd = open("test/ft_cat.txt", O_RDONLY);
	ft_cat(fd);
	close(fd);

	ft_cat(fd);	// This breaks everything

	ft_cat(-1);	// So does this

	TEST("%d", ft_isspace, isspace, ' ');
	TEST("%d", ft_isspace, isspace, 8);
	TEST("%d", ft_isspace, isspace, 9);

	TEST("%p", ft_strchr, strchr, "42FileChecker", 0);

	TEST("%p", ft_memchr, memchr, "42FileChecker", 0, 14);
	TEST("%p", ft_memchr, memchr, "42FileChecker", 52, 14);
	TEST("%p", ft_memchr, memchr, "42FileChecker", 107, 13);
	TEST("%p", ft_memchr, memchr, "42FileChecker", 107, 4);
	TEST("%p", ft_memchr, memchr, "42FileChecker", 52, 0);
	TEST("%p", ft_memchr, memchr, "42FileChecker", 122, 13);

	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 52);
	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 107);
	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 107);
	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 52);
	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 122);
	TEST("%p", ft_strrchr, strrchr, "42FileChecker", 0);
	TEST("%p", ft_strrchr, strrchr, "AAAAAAAAAA", 'A');
}
