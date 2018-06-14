# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 17:04:33 by mrandou           #+#    #+#              #
#    Updated: 2018/05/31 15:37:36 by mrandou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

CC			=		gcc

CFLAGS		=		-Wall -Wextra -Werror

#######
# INC #
#######

INC_DIR		=		incs/

INC_NAME	=\
	libft.h\
	get_next_line.h

INC			=		$(addprefix $(INC_DIR), $(INC_NAME))

INC_DIR_ALL	=\
	$(INC_DIR)\

ICFLAGS		=		$(addprefix -I, $(INC_DIR_ALL))

#######
# SRC #
#######

SRC_DIR		=		srcs/

SRC_NAME	=\
	ft_atoi.c ft_bzero.c ft_countword.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c ft_memalloc.c ft_memccpy.c ft_puttab.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
	ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
	ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
	ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c \
	ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
	ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
	ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrev.c \
	ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
	ft_strtrim.c ft_tolower.c ft_toupper.c ft_strrec.c \
	ft_nblen.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstrev.c \
	ft_putbn.c ft_strboc.c ft_one_word.c ft_putlst.c \
	ft_strpfo.c ft_lstlen.c ft_countoc.c ft_istoomutch.c \
	ft_putmthings.c ft_int_is_here.c ft_strcut.c ft_putnchar.c \
	ft_mprintf.c ft_strmjoin.c ft_strdbldel.c get_next_line.c \
	ft_split_whitespaces.c

SRC			=		$(addprefix $(SRC_DIR), $(SRC_NAME))

#######
# OBJ #
#######

OBJ_DIR		=		obj/

OBJ_NAME	=		$(SRC_NAME:.c=.o)

OBJ			=		$(addprefix $(OBJ_DIR), $(OBJ_NAME))

#######
# LIB #
#######

LDIBS_DIR 	=		incs/

LIBFT 		= 		libft.a

ICFLAGS		+=		$(addprefix -I, $(LDIBS_DIR))

AR			=		ar rc

RAN			=		ranlib

########
# RULE #
########

all: 				$(NAME)

$(NAME):			$(OBJ_DIR)	$(OBJ)
	$(AR) $(NAME) $(OBJ)
	$(RAN) $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)%.o:		 $(SRC_DIR)%.c ./Makefile $(INC)
	$(CC) $(CFLAGS) $(ICFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	rm -rf $(OBJ_DIR)
	make -C . clean

print-% :
	@echo $($*)

re: fclean all