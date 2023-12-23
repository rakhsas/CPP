NAME = btc

CC = c++
CFLAGLLS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

FILES = main.cpp BitcoinExchange.cpp

OBJCS = $(FILES:.cpp=.o)
HEADERS = BitcoinExchange.hpp
all : $(NAME)

$(NAME) : $(OBJCS) $(HEADERS)
	@echo "\n"
	@echo "\033[0;32mCompiling ..."
	@$(CC) $(CFLAGS) $(OBJCS) -o $(NAME) -lm
	@echo "Done !\033[0m"

%.o:%.cpp
	@printf "\033[0;33mGenerating  objects... %-33.33s\r" $@
	@$(CC)  $(CFLAGS) -c $<  -o $@

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
