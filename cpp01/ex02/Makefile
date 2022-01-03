CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=zombie

all: $(SRCS) $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(EXEC)

re: fclean all