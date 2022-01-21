CC=c++
CFLAGS= -g -std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp Character.cpp MateriaSource.cpp Materia.cpp Ice.cpp Cure.cpp
OBJ=$(SRCS:.cpp=.o)
EXEC=progr 
HEADERS = Character.hpp MateriaSource.hpp Materia.hpp Ice.hpp Cure.cpp IMateriaSource.hpp ICharacter.hpp

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