# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebaraton <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 14:21:25 by ebaraton          #+#    #+#              #
#    Updated: 2022/04/11 16:57:36 by ebaraton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_memchr.c \
	  ft_strnstr.c ft_memcmp.c ft_memmove.c ft_memset.c  ft_bzero.c ft_calloc.c \
	  ft_memcpy.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c\
		
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

%.o : %.c
		gcc $(CFLAGS) -c $< -o $(<:.c=.o)

RM = rm -f

CC = gcc

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : re clean fclean
