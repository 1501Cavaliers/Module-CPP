NAME = ScavTrap
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

NAME: $(OBJECTS)
	g++ $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: $(NAME)

all: clean fclean re