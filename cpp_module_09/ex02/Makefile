# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 09:52:44 by mjafari           #+#    #+#              #
#    Updated: 2023/09/04 09:52:45 by mjafari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = PmergeMe

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	PmergeMe.cpp \
		main.cpp \

OBJ	=	$(SRC:%.cpp=%.o)

all: $(NAME)

RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ): %.o: %.cpp	
		$(CC) -c $(FLAGS) $< -o $@

RUN = ./PmergeMe `shuf -i 1-10000 -n 3000 | tr "\n" " "`

clean:
		$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)
			
re: 		fclean all

run:
		${RUN}