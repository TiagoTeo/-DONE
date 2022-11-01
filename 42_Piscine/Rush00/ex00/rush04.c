/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:50:41 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/11 17:21:13 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putlin(int x, char a, char b, char c);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_putlin(x, 'A', 'B', 'C');
			else if (i == y)
				ft_putlin(x, 'C', 'B', 'A');
			else
				ft_putlin(x, 'B', ' ', 'B');
			i++;
		}
	}
}

void	ft_putlin(int x, char a, char b, char c)
{
	int	ii;

	ii = 1;
	while (ii <= x)
	{
		if (ii == 1)
			ft_putchar(a);
		else if (ii == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		ii++;
	}
	ft_putchar('\n');
}
