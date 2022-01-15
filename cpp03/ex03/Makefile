CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra -Wshadow -Wno-shadow
SRCS=ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=progr 
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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