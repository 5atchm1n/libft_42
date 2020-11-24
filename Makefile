# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshakya <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 00:09:13 by sshakya           #+#    #+#              #
#    Updated: 2020/11/24 00:11:20 by sshakya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRCS = *.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS	= -Wall -Wextra -Werror -I ${HEADER}

$(NAME) : $(OBJS)
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean re fclean

