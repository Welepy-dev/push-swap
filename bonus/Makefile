# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 12:16:06 by marcsilv          #+#    #+#              #
#    Updated: 2025/08/15 23:29:29 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker

CXX			=	cc

LIBFT		=	./libft

LFT			=	$(LIBFT)/libft.a

CXXFLAGS	=	-Wall -Wextra -Werror

OBJS		=	./src/checker.o			\
				./src/args.o

HEADERS		=	./inc/checker.h 

all: $(NAME)
$(OBJS): $(HEADERS)
$(NAME): $(LFT) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LFT) -o $(NAME)

$(LFT):
	@make -C $(LIBFT)

clean:
	rm -rf $(OBJS)
	@make -C $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re

