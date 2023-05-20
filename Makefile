

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_atoi.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_strncmp.c ft_memchr.c ft_memcmp.c 
OBJECTS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
		ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o \
		ft_memcpy.o ft_toupper.o ft_tolower.o ft_strchr.o \
		ft_strrchr.o ft_atoi.o ft_memmove.o ft_strlcpy.o \
		ft_strlcat.o ft_strncmp.o ft_memchr.o ft_memcmp.o 
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I ./

${NAME}: ${OBJECTS} 
	ar -rc ${NAME} ${OBJECTS}

all: ${NAME}

%.o : %.c libft.h
	cc  ${CFLAGS} ${INCLUDE}  -c $< -o $@

fclean: clean
	rm -f  ${NAME}

clean:
	rm -f *.o libft.a

re: fclean all

.PHONY : clean