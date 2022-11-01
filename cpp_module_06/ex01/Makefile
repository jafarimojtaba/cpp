# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 10:07:28 by mjafari           #+#    #+#              #
#    Updated: 2022/10/28 18:57:26 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =   main.cpp Serialize.cpp

OBJ    =    $(SRC:%.cpp=%.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
       
re: fclean all