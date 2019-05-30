#include <unistd.h>

/*
** rax - return
** rdi rsi rdx rcx params 1-4
** change r to e = int form
** chop off 'r' = short
** dil sil dl cl = rdi, rsi, rdx, rcx char form
** 
*/

void			ft_bzero(void *s, size_t n);
char			*ft_strcat(char *s1, const char *s2);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_puts(const char *s);

size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_strdup(const char *s1);

void			ft_cat(int fd);
