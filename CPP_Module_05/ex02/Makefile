NAME = Form_Tree

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS = main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp

$(NAME) : $(SRCS)
		$(CXX) $(GCCFLAG) $(SRCS) -o $@

all : $(NAME)
clean:
	$(RM) $(NAME)
re:	clean all

.PHONY: all fclean clean re