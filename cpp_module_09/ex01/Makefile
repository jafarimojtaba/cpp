# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 09:36:19 by mjafari           #+#    #+#              #
#    Updated: 2023/09/04 08:56:05 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	RPN

CC		=	c++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	RPN.cpp main.cpp

OBJ		=	$(SRC:%.cpp=%.o)

RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
       
re: fclean all

.PHONY: fclean clean re