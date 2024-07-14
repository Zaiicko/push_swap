# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 00:23:16 by zaiicko           #+#    #+#              #
#    Updated: 2024/07/14 23:20:55 by zaiicko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INC_DIR = inc
INC = -I$(INC_DIR) -I$(LIBFT_DIR)
SRC_DIR = srcs
OBJ_DIR = obj
RM = rm -rf

SRCS =	push_swap.c \

SRC = $(addprefix $(SRC_DIR)/, $(SRCS))

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: logo $(NAME) 

$(NAME):	$(OBJ)
			@make -C $(LIBFT_DIR)
			@cp $(LIBFT) $(NAME)
			@ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) $(OBJ_DIR)
			@make clean -C libft

fclean: clean
		@$(RM) $(OBJ_DIR)
		@$(RM) $(NAME)
		@make fclean -C libft

re:		fclean all

logo :
	@echo "\033[31m"
	@echo "                                                                                               "
	@echo " _|_|_|                        _|              _|_|_|                                          "
	@echo " _|    _|  _|    _|    _|_|_|  _|_|_|        _|        _|      _|      _|    _|_|_|  _|_|_|    "
	@echo " _|_|_|    _|    _|  _|_|      _|    _|        _|_|    _|      _|      _|  _|    _|  _|    _|  "
	@echo " _|        _|    _|      _|_|  _|    _|            _|    _|  _|  _|  _|    _|    _|  _|    _|  "
	@echo " _|          _|_|_|  _|_|_|    _|    _|      _|_|_|        _|      _|        _|_|_|  _|_|_|    "
	@echo "                                                                                     _|        "
	@echo "                                                                                     _|        "
	
.PHONY:	fclean re all clean logo
