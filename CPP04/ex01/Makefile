NAME = ex01

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Animal.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp \

all : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

rm = rm -rf

clean :
		$(rm) $(NAME)

re : clean all