# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: txaba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 08:37:20 by txaba             #+#    #+#              #
#    Updated: 2019/07/22 13:18:24 by txaba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = checker

NAME2 = push_swap
PUSH_LIb = pushswap.a

SRC = ./ft_lstlen.c \
	rotate.c \
	instructions.c \
	isempty.c \
	push.c \
	swap.c \
	checkcommand.c \
	sortchecker.c \
	find_min_loc.c \
	s_chunk.c \
	delete_n.c \
	generate.c \
	push_ab.c \
	print.c \
	error_ha.c

UTIL_OBJ = ./ft_lstlen.o \
	rotate.o \
	instructions.o \
	isempty.o \
	push.o \
	swap.o \
	checkcommand.o \
	sortchecker.o \
	find_min_loc.o \
	s_chunk.o \
	delete_n.o \
	generate.o \
	push_ab.o \
	print.o \
	error_ha.o


LIB = ./libft

FLAGS = -Wextra -Werror -Wall

CC = gcc

OBJ = push_swap.o

OBJ1 = checker_main.o

INCLUDES = push_swap.h

all : $(NAME1)

$(NAME1):
	@echo  "\033[32m"
	@echo "Making libft"
	@make -C $(LIB)

	@echo "Making pushswap library"
	$(CC) -c $(FLAGS)  $(SRC) -I $(INCLUDES)
	ar rc $(PUSH_LIb) $(UTIL_OBJ)
	
	@echo "Making checker main"
	$(CC) $(FLAGS)  checker_main.c -I $(INCLUDES)  libft/libft.a $(PUSH_LIb) -o $(NAME1)
	@echo "Making push swap maine"
	$(CC) $(FLAGS)  push_swap_main.c -I $(INCLUDES)  libft/libft.a $(PUSH_LIb) -o $(NAME2)
	@echo "\033[m"
clean:
	@echo "\033[31m"
	@echo "Cleaning libft"
	@make clean -C libft
	@echo "Finished cleaning libft"
	@echo "Cleaning pushswap"
	rm -f $(UTIL_OBJ)
	@echo "Finished cleaning pushswap"
	@echo "\033[m"

fclean: clean
	@echo "\033[31m"
	@echo "Full clean of libft"
	@make fclean -C libft
	rm -f $(NAME1)
	rm -f $(NAME2)
	rm -f $(PUSH_LIb)
	@echo "\033[m"

re: fclean all

norme:
	norminette ./ft_lstlen.c \
				rotate.c \
				instructions.c \
				isempty.c \
				push.c \
				swap.c \
				checkcommand.c \
				sortchecker.c \
				find_min_loc.c \
				s_chunk.c \
				delete_n.c \
				generate.c \
				push_ab.c \
				print.c \
				error_ha.c
				
.PHONY: all clean fclean re
