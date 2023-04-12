#include "iostream"
int	main(int ac, char **av)
{
	int	i,j;
	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << char (toupper(av[i][j]));
				j++;
			}
			i++;
		}
	}
	return (0);
}