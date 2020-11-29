# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshakya <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 00:09:13 by sshakya           #+#    #+#              #
#    Updated: 2020/11/29 07:28:42 by sshakya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SONAME = libft.so

INCLUDE = libft.h

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

BONUS =	ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \

BONUSOBJS = ${BONUS:.c=.o}

OBJS = ${SRCS:.c=.o}

CC = clang

RM = rm -f

CFLAGS	= -Wall -Wextra -Werror

$(NAME) : ${OBJS} ${INCLUDE}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}


bonus:	${BONUSOBJS} ${OBJS}
		${CC} ${FLAGS} -c ${SRCS} ${BONUS}
		ar rcs ${NAME} ${OBJS} ${BONUSOBJS} ${INCLUDE}

norm :
	~/.norminette/norminette.rb ${SRCS} ${BONUS} ${INCLUDE}

so :
	${CC} -fPIC -c ${CFLAGS} ${SRCS} ${BONUS}
	gcc -shared -o ${SONAME} ${OBJS} ${BONUSOBJS}

clean :
	${RM} ${OBJS} ${BONUSOBJS}

fclean : clean
	${RM} ${NAME} ${SONAME}

re : fclean all

.PHONY : all clean re fclean
