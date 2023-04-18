_YELLOW="\e[38;5;226m"
_RED="\e[38;5;9m"
_GREEN="\e[38;5;10m" 

NAME		= PhoneBook

SRC			= main.cpp\
			  PhoneBook.cpp\
			  Contact.cpp\


OBJS		= $(SRCS:.cpp=.o)

SRCDIR 		= ./src/

INCDIR 		= ./includes/

SRCS 		= $(addprefix $(SRCDIR), $(SRC))

CFLAGS 		= -Wall -Werror -Wextra -std=c++98 -Iincludes -g

CC			= c++

.cpp.o:
			@$(CC) $(CFLAGS) -c $< -o $@

all :		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo $(_GREEN)
			@echo "*************************"
			@echo "*                       *"
			@echo "*  COMPILATION SUCCESS  *"
			@echo "*                       *"
			@echo "*************************"

clean : 	
			@rm -f $(OBJS)
			@echo $(_YELLOW)
			@echo "*************************"
			@echo "*                       *"
			@echo "*    CLEAN  COMPLETE    *"
			@echo "*                       *"
			@echo "*************************"

fclean : 	clean
			@rm -f $(NAME)
			@echo $(_RED)
			@echo "*************************"
			@echo "*                       *"
			@echo "*   FCLEAN   COMPLETE   *"
			@echo "*                       *"
			@echo "*************************"

re : 		fclean all 

.PHONY: all clean fclean re
