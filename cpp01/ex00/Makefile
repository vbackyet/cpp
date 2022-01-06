CC=c++
CFLAGS=-std=c++98 -c -Wall -Werror -Wextra
SRCS=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADER=Zombie.hpp
OBJ=$(SRCS:.cpp=.o)
EXEC=zombie

all: $(SRCS) $(EXEC)

$(EXEC): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(EXEC)

re: fclean all




# Re-using the Zombie class, now we are going to create an horde of zombies!
# Write a function that takes an integer N. When called, it allocates N Zombie objects.
# It must allocate all the N Zombie objects in a single allocation. Then, it should initialize
# each Zombie by giving to each one a name. Last, it should return the pointer to the first
# Zombie. The function is prototyped as follows:
# Zombie* zombieHorde( int N, std::string name );
# Submit a main to test that your function zombieHorde works as intended. You may
# want to do so by calling announce() on each one of the Zombies. Do not forget to delete
# ALL the Zombies when you don’t need them anymore.