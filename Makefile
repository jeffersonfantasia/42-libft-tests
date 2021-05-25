# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/23 21:34:39 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/25 20:24:53 by jfranchi         ###   ########.fr        #
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

#Compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBS = -lft -L $(LIB)
HEADERS = -I $(INCLUDE)

#List all the source files with .c
SRCS = main.c

#Bin file
NAME = main

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: clean
	$(CC) $(APPS)/$(SRCS) $(FLAGS) $(LIBS) $(HEADERS) -o $(BIN)/$(NAME)

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