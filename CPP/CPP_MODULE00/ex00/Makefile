NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
#-fsanitize=address -g3

all : $(NAME)

$(NAME) :
	@echo "\n"
	@echo "\033[0;32mCompiling megaphone..."
	@$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)
	@echo "\n\x1b[34mDone !\033[0m"

clean :
	@echo "\033[0;31mCleaning ..."
	@rm -f $(NAME)
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
