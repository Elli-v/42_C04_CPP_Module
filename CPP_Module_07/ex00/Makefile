NAME	= whatever
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM		= rm -f

SRCS	= main.cpp
OBJS = $(SRCS:.cpp=.o)

all		: $(NAME)

$(NAME) : $(SRCS)
		$(CXX) $(CXXFLAGS) $(SRCS) -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re		: clean all

.PHONY: all clean re