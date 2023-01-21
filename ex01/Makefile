NAME = Moar_brainz

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp \
		zombieHorde.cpp \
		randomChump.cpp \

all : $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re	: clean all