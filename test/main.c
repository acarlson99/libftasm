#include "../libfts.h"
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
	puts("A");
	puts("");
	puts("A");
	puts("A");
	puts("");
	puts("A");

	puts("--------");

	ft_puts("A");
	ft_puts("");
	ft_puts("A");
	ft_puts("A");
	ft_puts("");
	ft_puts("A");
	TEST("[%d]", ft_puts, puts, "");
}
