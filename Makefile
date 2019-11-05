AS = /usr/bin/env nasm
ASFLAGS = -f macho64
SFILES = ft_isalpha.s ft_isdigit.s ft_isalnum.s ft_isascii.s ft_isprint.s\
	ft_toupper.s ft_tolower.s ft_strlen.s ft_puts.s ft_memset.s ft_bzero.s\
	ft_memcpy.s ft_strcat.s ft_strdup.s ft_cat.s ft_isspace.s ft_islower.s\
	ft_isupper.s ft_strchr.s ft_strrchr.s ft_memchr.s
SRC = src/
OFILES = $(addprefix $(SRC), $(SFILES:.s=.o))
NAME = libfts.a
DNAME = d_test

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

j:
	make
	gcc test/main.c -g -L. $(NAME) -o $(DNAME)

k: fclean
	rm -f *.o
	rm -f *.out
	rm -f $(DNAME)
	rm -rf *.dSYM

l:
	gcc test/main.c -L. $(NAME) -o $(DNAME)
