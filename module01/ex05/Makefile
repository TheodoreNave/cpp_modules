# ************************************************************************** #
#                                                                            #
#                		Makefile for 42 School			                 	 #
#                Created on  : Thu Feb 24 13:45:02 2022                      #
#                Last update : Thu Feb 24 13:45:02 2022                      #
#                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       #
#                                                                            #
# ************************************************************************** #

NAME = Karen

SRCS =   	Karen.cpp \
			main.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I .

HEADER = -I .

OBJ = $(SRCS:%.cpp=%.o)

# LIBS =

ADDED = echo "\033[92m⚙️ ⚙️ ⚙️ ⚙️ ⚙️ Karen SUCCESS\033[0m"

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

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
