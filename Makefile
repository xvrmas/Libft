

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_atoi.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	   	ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c  ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = ${SRC:.c=.o}

BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c \
		

BONUSOBJ = ${BONUSSRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra

INCLUDE = -I ./

${NAME}: ${OBJECTS}
	ar -rc ${NAME} ${OBJECTS}

bonus: ${OBJECTS} ${BONUSOBJ} 
	ar -rc ${NAME} ${OBJECTS} ${BONUSOBJ} 

all: ${NAME}

%.o : %.c libft.h
	cc  ${CFLAGS} ${INCLUDE}  -c $< -o $@

fclean: clean
	rm -f  ${NAME}

clean:
	rm -f *.o libft.a

re: fclean all

.PHONY : clean
