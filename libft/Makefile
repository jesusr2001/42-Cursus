NAME=libft.a

SRCS=ft_atoi.c ft_putchar_fd.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c ft_strdup.c ft_strncmp.c \

OBJECTS=ft_atoi.o ft_putchar_fd.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_split.o \
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_strchr.o ft_striteri.o ft_strjoin.o \
ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o \
ft_tolower.o ft_toupper.o ft_strdup.o ft_strncmp.o \

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all