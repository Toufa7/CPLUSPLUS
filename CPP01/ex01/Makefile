NAME = ex01

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \
		
all : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re	: clean all