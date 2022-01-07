CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=fixed 
HEADERS = Fixed.hpp Point.hpp

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