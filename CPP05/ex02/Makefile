CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= Form
SRCS	= main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotmyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS	= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f hyoyoon1_shrubbery hyoyoon2_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re