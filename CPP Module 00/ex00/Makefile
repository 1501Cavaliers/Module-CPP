NAME = megaphone
C++ = g++
FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = megaphone.cpp

OBJECTS = $(SOURCE:.cpp=.o)

$(NAME): $(OBJECTS)
	$(C++) $(FLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: clean all