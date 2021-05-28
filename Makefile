# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/23 21:34:39 by jfranchi          #+#    #+#              #
#    Updated: 2021/05/27 22:13:01 by jfranchi         ###   ########.fr        #
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
SRC = ./src
HEADERS = ./headers

#Compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBS = -lft -L $(LIB)

SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(SRCS:.c=.o)
NAME = $(BIN)/main

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: clean objects $(NAME)

objects: $(OBJS)

$(SRC)/%.o: $(SRC)/%.c
	$(CC) -c $(FLAGS) $(LIBS) -I $(INCLUDE) $< -o $@

$(BIN)/%: $(APPS)/%.c
	$(CC) $< $(SRC)/*.o $(FLAGS) $(LIBS) -I $(INCLUDE) -o $@

run:
	@echo "\n"
	@echo "____________________________Program started____________________________"
	@echo "\n"
	@$(BIN)/main
	@echo "_____________________________Program ended_____________________________"
	@echo "\n"

clean:
	@rm -vf $(BIN)/* $(SRC)/*.o
	@echo "Binary has been deleted"

git:
	git add .
	git commit -m "upload files"
	git push origin master

.PHONY: all, run, clean, objects, git