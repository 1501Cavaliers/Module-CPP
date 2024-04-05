NAME = PhoneBook
C++ = g++
FLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = PhoneBook.cpp \
		PhoneBook.utils.cpp \
		Contact.cpp \
		main.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJECTS)
	$(C++) $(FLAGS) $(OBJECTS) -o $(NAME)

re: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

all: clean flcean re