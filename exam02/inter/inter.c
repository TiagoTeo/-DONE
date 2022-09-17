#include <unistd.h>

void	ft_putchar(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	ft_checkdupl(char *str, char c)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == c)
			return (0);
		a++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	int		n;
	int		a;
	char	str[126];

	i = 0;
	a = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			n = 0;
			while (av[2][n])
			{
				if (av[1][i] == av[2][n] && ft_checkdupl(str, av[1][i]) > 0)
				{
					str[a] = av[1][i];
					a++;
				}
				n++;
			}
			i++;
		}
		ft_putchar(str);
	}
	write(1, "\n", 1);
}
