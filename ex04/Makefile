# Program name
NAME		= sed_sux

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++20

# Source files and Object files
SRCS		= main.cpp Replacer.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADERS		= Replacer.hpp

# Rules
all: $(NAME)

# Tell Make that every .o file depends on the headers being up-to-date
$(OBJS): $(HEADERS)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re