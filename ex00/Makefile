NAME = megaphone
CPPC = c++
CFLAGS = -Wall -Werror -Wextra
RM = rm
RMFLAGS = -f

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPPC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o	: %.cpp
	$(CPPC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re:
	make fclean
	make all

.PHONY:all clean fclean re