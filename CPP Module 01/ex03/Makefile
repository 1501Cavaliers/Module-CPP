NAME = Unnecessary_violence
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp \
	Weapon.cpp \
	HumanA.cpp\
	HumanB.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

NAME: $(OBJECTS)
	g++ $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: $(NAME)

all: clean fclean re