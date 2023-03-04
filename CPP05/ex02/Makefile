NAME = ex02

CPP      = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = AForm.cpp \
		Bureaucrat.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		main.cpp \

all     : $(NAME)

$(NAME) : $(FILES)
	$(CPP) $(CPP_FLAGS) $(FILES) -o $(NAME)

RM = rm -rf

clean :
	$(RM) $(NAME)

re : clean all