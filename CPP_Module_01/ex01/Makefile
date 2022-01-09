NAME = Moar_brainz!

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
INCS = -I Zombie.hpp
OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJT)
$(OBJT): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)
clean:
	$(RM) $(NAME)
fclean:
	$(RM) $(OBJT) $(NAME)
re:	clean all

.PHONY: all fclean clean re