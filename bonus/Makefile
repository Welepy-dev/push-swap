# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 12:16:06 by marcsilv          #+#    #+#              #
#    Updated: 2025/08/16 22:53:35 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker

CXX			=	cc

LIBFT		=	./libft

LFT			=	$(LIBFT)/libft.a

CXXFLAGS	=	-Wall -Wextra -Werror

OBJS		=	./src/checker.o				\
				./src/utils.o			\
				./src/moves/push.o			\
				./src/moves/rotate.o		\
				./src/moves/swap.o			\
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

