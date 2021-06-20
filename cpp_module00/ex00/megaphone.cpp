#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int ac, char **av)
{
	int i;
	int j;
   
	i = 0;
	if (ac == 1)
	 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				putchar(toupper(av[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}