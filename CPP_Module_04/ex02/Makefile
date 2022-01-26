NAME = Brain2

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

$(NAME) : $(SRCS)
		$(CXX) $(GCCFLAG) $(SRCS) -o $@

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	clean all

.PHONY: all fclean clean re