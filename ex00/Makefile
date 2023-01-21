NAME = BraiiiiiiinnnzzzZ

CPP      = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = newZombie.cpp \
		randomChump.cpp \

all     : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) ./main.cpp -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re              : clean all