# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allharut <allharut@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 12:17:28 by allharut          #+#    #+#              #
#    Updated: 2023/09/28 16:31:09 by allharut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LIB = ar rcs

NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c main.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c
OBJS = $(SRC:.c=.o)
CC = gcc
INCDIR = .
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

all: $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -f *.o *.d $(NAME)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re