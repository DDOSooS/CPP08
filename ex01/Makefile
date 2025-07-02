NAME = SPAN

CPP = c++
CPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 

SRCS = main.cpp  srcs/Span.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CPFLAGS) -o $@ $(OBJS)
%.o:%.cpp
	$(CPP) $(CPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re