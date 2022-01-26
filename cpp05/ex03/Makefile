CC=c++
CFLAGS= -g -std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp Bureaucrat.cpp Form.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			Intern.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=progr 
HEADERS = Bureaucrat.hpp Form.hpp\
			PresidentialPardonForm.hpp\
			RobotomyRequestForm.hpp\
			ShrubberyCreationForm.hpp\
			Intern.hpp

all: $(SRCS) $(EXEC)

$(EXEC): $(OBJ) $(HEADERS)
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(EXEC)

re: fclean all