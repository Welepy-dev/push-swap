# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsilv <marcsilv@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 12:16:06 by marcsilv          #+#    #+#              #
#    Updated: 2025/08/12 12:18:43 by marcsilv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CXX = cc
CXXFLAGS = -Wall -Wextra -Werror
OBJS = main.o
HEADERS = push_swap.h
all: $(NAME)
$(OBJS): $(HEADERS)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
