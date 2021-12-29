NAME = megaphone

CPPC = clang++
CPPFLAGS = -Wall -Wextra -Werror
RM = rm -f
MAIN = megaphone.cpp

$(NAME): $(MAIN)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME)

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	clean all

.PHONY: all clean re