Name = easyfind

CPP = c++
CPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp
OBJS =$(SRCS:.cpp=.o)

all : $(Name)

$(Name) : $(OBJS)
	$(CPP) $(CPFLAGS) -o $@ $(OBJS)

%.o : %.cpp
	$(CPP) $(CPFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(Name)

re : fclean all

.PHONY : all clean fclean re