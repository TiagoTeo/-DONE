#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int n;

	i = 0;
	n = argc - 1;
	while (n  >= 0)
	{
		while (argv[n][i] != '\0')
		{
			if (argv[n][i] >= 65 && argv[n][i] <= 90)
			{
				argv[n][i] += 13;
				if (argv[n][i] > 90)
					argv[n][i] -= 26;
			}
			else if (argv[n][i] >= 97 && argv[n][i] <= 122)
			{
				argv[n][i] += 13;
				if (argv[n][i] > 122)
					argv[n][i] -= 26;
			}
			i++;
		}
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
