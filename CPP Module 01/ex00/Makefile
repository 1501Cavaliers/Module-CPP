NAME = zombie
G++ = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SOURCES = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

NAME: $(OBJECTS)
	$(G++) $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: $(NAME)

all: clean fclean re