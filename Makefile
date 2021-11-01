# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epresa-c <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 13:36:28 by epresa-c          #+#    #+#              #
#    Updated: 2021/11/01 14:04:00 by epresa-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strchr.c ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c ft_atoi.c ft_putendl_fd.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memset.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_strdup.c 

FLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

compclean: $(NAME) clean

