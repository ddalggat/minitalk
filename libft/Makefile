CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft
LIB = ${NAME}.a

SRCS =	ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memccpy.c \
		ft_memcmp.c ft_memmove.c \
		ft_memchr.c ft_strlen.c \
		ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c \
		ft_strncmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c \
		ft_strlcpy.c ft_itoa.c \
		ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strlcat.c \
		ft_atoi.c ft_split.c 

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
        ft_lstadd_back.c ft_lstdelone.c ft_lstlast.c \
		
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
DEPS = libft.h

all: ${LIB}

${LIB}: ${OBJS} ${BONUS_OBJS} ${DEPS}
	ar -rc ${LIB} ${OBJS}
	ranlib ${LIB}

bonus: ${OBJS} ${BONUS_OBJS}
	ar -rc ${LIB} ${OBJS} ${BONUS_OBJS}
	ranlib ${LIB}

clean:
		rm -f $(OBJS) ${BONUS:.c=.o}

fclean: clean
		rm -f ${LIB} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus
