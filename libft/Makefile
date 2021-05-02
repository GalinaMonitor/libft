NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra -O2 -c

SOURCES_LIST = ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlen.c\
	ft_strdup.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strnstr.c\
	ft_strncmp.c\
	ft_atoi.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memalloc.c\
	ft_strnew.c\
	ft_strmapi.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_isspace.c\

OBJECTS = $(patsubst %.c, %.o, $(SOURCES_LIST))

D_FILES = $(patsubst %.c, %.d, $(SOURCES_LIST))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $?

%.o : %.c
	$(CC) $(FLAGS) $< -o $@ -MD

include $(wildcard $(D_FILES))

clean:
	rm -f $(OBJECTS) $(D_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : re all fclean clean
