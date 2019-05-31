NSM = /usr/bin/env nasm
NSMFLAGS = -f macho64
LNK = ld
SFILES = ft_isalpha.s ft_isdigit.s ft_isalnum.s ft_isascii.s ft_isprint.s ft_toupper.s ft_tolower.s ft_strlen.s ft_puts.s ft_memset.s ft_bzero.s ft_memcpy.s ft_strcat.s ft_strdup.s
SRC = src/
OFILES = $(SFILES:.s=.o)
NAME = libfts.a
DNAME = d_test

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.s
	$(NSM) $(NSMFLAGS) -o $@ $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

j:
	make
	gcc test/*.c -g -L. $(NAME) -o $(DNAME)

k: fclean
	rm -f *.out
	rm -rf *.dSYM

l:
	gcc test/*.c -L. $(NAME) -o $(DNAME)
