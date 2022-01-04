CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp 
# HumanA.cpp HumanB.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=replace 
# HumanB.hpp HumanA.hpp 

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