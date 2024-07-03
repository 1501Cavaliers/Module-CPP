NAME = Polymorphism
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	WrongDog.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	c++ $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re