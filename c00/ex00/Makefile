NAME = megaphone

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = Megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
