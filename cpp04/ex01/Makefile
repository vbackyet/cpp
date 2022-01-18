CC=c++
CFLAGS= -g -std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=progr 
HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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