# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otoufah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 15:11:45 by otoufah           #+#    #+#              #
#    Updated: 2022/11/18 15:11:46 by otoufah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CPP	 = c++

CPP_FLAGS = -Wall -Wextra -Werror


CPP_VERSION = -std=c++98

FILES = main.cpp \

all	: $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(CPP_VERSION) $(FILES) -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re		: clean all
