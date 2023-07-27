NAME = Animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

FILES = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJCS = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJCS)
	@echo "\n"
	@echo "\033[0;32mCompiling Animal..."
	@$(CC) $(CFLAGS) $(OBJCS) -o $(NAME) -lm
	@echo "Done !\033[0m"

%.o:%.cpp
	@printf "\033[0;33mGenerating Animal objects... %-33.33s\r" $@
	@$(CC)  $(CFLAGS)  -c $<  -o $@

clean :
	@echo "\033[0;31mCleaning ..."
	@rm -f $(OBJCS)
	@echo "\033[0;31mEveryThings' 𝒄𝒍𝒆𝒂𝒏𝒆𝒅\033[0m"
	@echo "\033[0m"

fclean : clean
	@echo "\033[0;31mCleaning ..."
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\033[0m"

re :fclean all

run : re clean
	clear
