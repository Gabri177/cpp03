# Makefile

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPPFILE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OFILE = $(CPPFILE:.cpp=.o)
NAME = ClapTrap

all: $(NAME)

$(NAME): $(OFILE)
	g++ $(CPPFLAGS) $(VERSION_FLG) -o $(NAME) $(OFILE)

%.o:%.cpp
	g++ $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re