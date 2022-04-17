# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 09:14:58 by amorion-          #+#    #+#              #
#    Updated: 2022/04/17 13:11:28 by amorion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -std=c++98 -Wall -Werror -Wextra

NAME = a.out

all: $(NAME)

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Binary generated"

clean: 
	@rm -rf $(OBJS)
	@echo "Object files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "Binary file deleted"

re: fclean all

.PHONY: re fclean clean all
