CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SRCS=ClapTrap.cpp main.cpp ScavTrap.cpp 
OBJ=$(SRCS:.cpp=.o)
EXEC=progr 
HEADERS = ClapTrap.hpp ScavTrap.hpp

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