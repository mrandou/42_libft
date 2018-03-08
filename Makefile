# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 17:04:33 by mrandou           #+#    #+#              #
#    Updated: 2018/03/08 17:46:20 by mrandou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	./ft_atoi.c ./ft_bzero.c ./ft_countword.c ./ft_isalnum.c \
			./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c \
			./ft_itoa.c ./ft_memalloc.c ./ft_memccpy.c ./ft_puttab.c \
			./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memdel.c \
			./ft_memmove.c ./ft_memset.c ./ft_putchar.c ./ft_putchar_fd.c \
			./ft_putendl.c ./ft_putendl_fd.c ./ft_putnbr.c ./ft_putnbr_fd.c \
			./ft_putstr.c ./ft_putstr_fd.c ./ft_strcat.c ./ft_strchr.c \
			./ft_strclr.c ./ft_strcmp.c ./ft_strcpy.c ./ft_strdel.c \
			./ft_strdup.c ./ft_strequ.c ./ft_striter.c ./ft_striteri.c \
			./ft_strjoin.c ./ft_strlcat.c ./ft_strlen.c ./ft_strmap.c \
			./ft_strmapi.c ./ft_strncat.c ./ft_strncmp.c ./ft_strncpy.c \
			./ft_strnequ.c ./ft_strnew.c ./ft_strnstr.c ./ft_strrev.c \
			./ft_strrchr.c ./ft_strsplit.c ./ft_strstr.c ./ft_strsub.c \
			./ft_strtrim.c ./ft_tolower.c ./ft_toupper.c ./ft_strrec.c \
			./ft_nblen.c ./ft_lstnew.c ./ft_lstdelone.c ./ft_lstdel.c \
			./ft_lstadd.c ./ft_lstiter.c ./ft_lstmap.c ./ft_lstrev.c \
			./ft_putbn.c ./ft_strboc.c ./ft_one_word.c ./ft_putlst.c \
			./ft_strpfo.c ./ft_lstlen.c ./ft_countoc.c ./ft_istoomutch


OBJS	=	$(SRCS:.c=.o)

RM		=	rm -f

CFLAGS	+=	-Wall -Wextra -Werror

CC		=	gcc

AR		=	ar rc

RAN		=	ranlib

INC		=	-I includes/

all		:	$(NAME)

%.o		:	%.c
	$(CC) -c -o $@ $^

$(NAME)	:	$(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RAN) $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all
