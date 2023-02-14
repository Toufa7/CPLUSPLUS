NAME = ex01

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES =	ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp \

all = $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)


rm : rm -rf

clean :
		$(rm) $(NAME)

re : clean all

