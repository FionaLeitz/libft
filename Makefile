# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleitz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 10:17:02 by fleitz            #+#    #+#              #
#    Updated: 2021/11/25 11:11:47 by fleitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_isalpha.c			\
		 	  ft_isdigit.c			\
			  ft_isalnum.c			\
		 	  ft_isascii.c			\
		 	  ft_isprint.c			\
		 	  ft_strlen.c			\
		 	  ft_memset.c			\
		 	  ft_bzero.c			\
		 	  ft_memcpy.c			\
		 	  ft_memmove.c			\
		 	  ft_strlcpy.c			\
		 	  ft_strlcat.c			\
		 	  ft_toupper.c			\
		 	  ft_tolower.c			\
		 	  ft_strchr.c			\
		 	  ft_strrchr.c			\
		 	  ft_strncmp.c			\
			  ft_strncmp.c			\
			  ft_memchr.c			\
			  ft_memcmp.c			\
			  ft_strnstr.c			\
			  ft_atoi.c				\
			  ft_calloc.c			\
			  ft_strdup.c			\
			  ft_substr.c			\
			  ft_strjoin.c			\
		 	  ft_strtrim.c			\
		 	  ft_split.c			\
			  ft_itoa.c				\
		 	  ft_strmapi.c			\
		 	  ft_striteri.c			\
		 	  ft_putchar_fd.c		\
		 	  ft_putstr_fd.c		\
		 	  ft_putendl_fd.c		\
		 	  ft_putnbr_fd.c		\

OBJS		= ${SRCS:.c=.o}

HEADERS 	= libft.h

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}
			ar -rc ${NAME} ${OBJS} ${HEADERS}

${NAME}:	${OBJS}

.c.o:
			gcc ${CFLAGS} -I${HEADERS} -c $< -o ${<:.c=.o}

test:		all
			gcc ${CFLAGS} ../mains/mains_all.c libft.a && ./a.out

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME} a.out

re:			fclean all
