# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/23 21:34:39 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/25 23:36:03 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 ###############################################################################
#																				#
#								CREATE VARIABLE									#
#																				#
 ###############################################################################

#Directories
APPS = ./apps
BIN = ./bin
LIB = ../libft
INCLUDE = ../libft
OBJ = ./obj
SRC = ./src
HEADERS = ./headers

#Compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBS = -lft -L $(LIB)

NAME = $(BIN)/main

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: clean $(NAME)

$(BIN)/%: $(APPS)/%.c
	$(CC) $< src/main_ft_tolower.c $(FLAGS) $(LIBS) -I $(INCLUDE) -o $@

run:
	@echo "Program started"
	@echo "\n"
	@$(BIN)/main
	@echo "\n"
	@echo "Program ended"

clean:
	@rm -vf $(BIN)/*
	@echo "Binary has been deleted"

.PHONY: all, run, clean