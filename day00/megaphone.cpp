#include <iostream>
#include <cctype>

int strlen(const char *av)
{
	int i;

	i = 0;
	if(av)
	{
		while (av[i])
		{
			i++;
		}
	}
	return (i);
}
void	megaphone(int ac,char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while(j < strlen(av[i])) {
			std::cout << (char) toupper(av[i][j]);
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(ac,av);
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
