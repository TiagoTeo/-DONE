#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int largura;
	int linhas;

	linhas = y;
	largura = x;
	ft_putchar('A');
	while (y > 0)
	{
		x = largura;
		if (!(x == 1 && y == 1))
		{
			if (y == linhas)
			{
				while (x != 2)
				{
					ft_putchar('B');
					x--;
				}
				x = largura;
				ft_putchar('C');
				ft_putchar('\n');
			}
			else if (y == 1)
			{
				ft_putchar('C');
				while (x != 2)
				{
					ft_putchar('B');
					x--;
				}
				ft_putchar('A');
				x = largura;
				ft_putchar('\n');
			}
			else if (!(y == 1 || y == linhas))
			{
				ft_putchar('B');
				while (x != 2)
				{
					ft_putchar(' ');
					x--;
				}
				x = largura;
				ft_putchar('B');
				ft_putchar('\n');
			}
		}
		y--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	rush(100, 49);
}
