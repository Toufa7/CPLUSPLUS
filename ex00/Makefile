# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otoufah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 15:44:50 by otoufah           #+#    #+#              #
#    Updated: 2023/01/18 15:44:52 by otoufah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CPP	 = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp \

all	: $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re		: clean all
