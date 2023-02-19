NAME = ex00

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES =	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

all : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

rm = rm -rf

clean :
		$(rm) $(NAME)

re : clean all