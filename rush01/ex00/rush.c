/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:48:50 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/17 17:57:23 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_solve_rush(int **Array, int nbr_grid, char **argv);

int	ft_rush_check(int *argv, int nbr_grid)
{
	int k;
	int c;

	if (nbr_grid == 0)
		return (0);
	k = 0;
	c = 2 * nbr_grid;
	/*o k vai aumentando 2 em 2. o c fica sempre o mesmo (distancia no input
	 * entre a mesma coluna/linha)*/
	while (k != (nbr_grid * 2) - 2)
	{
		if ((argv[k] + argv[c + k] > nbr_grid + 1) && (argv[k] + argv[c + k] < nbr_grid - 1))
			return (0);
		k += 2;
	}
	k = (nbr_grid * 2) * 2;
	while (k + c != ((((nbr_grid * 2) * 2) * 2) - 1))
	{
		if ((argv[k] + argv[k + c] > nbr_grid + 1) && (argv[k] + argv[c + k] < nbr_grid - 1))
			return (0);
		k += 2;
	}
	return (1);
}

int *ft_full_of_ones(int *Str, int size)
{
	int z;

	z = 0;
	while (z <= size)
	{
		Str[z] = 0;
		z++;
	}
	Str[z - 1] = '\0';
	return (Str);
}

int	ft_nbr_grid_det(char *input)
{
	int	i;
	int result;
	int a;

	i = 0;
	result = 0;
	a = 1;
	while (input[i] != '\0')
	{
		if (a == 1 && (input[i] >= 48 && input[i] <= 57))
		{
			result++;
			a = 0
		}
		else if (input[i] == 32 && a != 1)
			a = 1;
		else
			return (0);
		i++;
	}
	if (result % 4 == 0)
		return (result / 4);
	else
		return (0);
}

void	rush(int argc, char **argv)
{
	int	**Array;
	int	nbr_grid;
	int n;

	n = 0;
	if (argc == 2 && ft_nbr_grid_det(argv[1]) != 0 && ft_rush_check(argv[1], ft_nbr_grid_det(argv[1])) != 0)
	{
		nbr_grid = ft_nbr_grid_det(argv[1]);
		Array = (int **)malloc(sizeof(int) * (nbr_grid + 1));
		Array[nbr_grid] = '\0';
		while (Array[n] != '\0')
		{
			Array[n] = (int *)malloc(sizeof(int) * (nbr_grid + 1);
			Array[n] = ft_full_of_ones(Array[n], nbr_grid);
		}
		ft_solve_rush(Array, nbr_grid, argv);
	}
	else if (argc != 2 || ft_nbr_grid_det(argv[1]) == 0)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
}
