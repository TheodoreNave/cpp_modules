# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnave <tnave@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 13:23:30 by tnave             #+#    #+#              #
#    Updated: 2022/02/25 13:35:05 by tnave            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook_pro

SRCS = 	main.cpp				\
		Contact.class.cpp 		\
		Phonebook.class.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I ./include/

HEADER = -I .

OBJ = $(SRCS:%.cpp=%.o)

#LIBS =

ADDED = echo "\033[92m⚙️ ⚙️ ⚙️ ⚙️ ⚙️ Phonebook build \033[0m"

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) && $(ADDED)

MAKEFLAGS += --silent

all: $(NAME)

%.o%.cpp:
	$(CXX) -c $(CXXFLAGS) -I $(HEADER) $< -o ${<:.cpp=.o}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
