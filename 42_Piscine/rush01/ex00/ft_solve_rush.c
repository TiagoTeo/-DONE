/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:52:54 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/17 17:57:27 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve_rush(int **Array, int nbr_grid, char **argv)
{
	int i;
	int n;
	int a;
	int num_max;

	i = 0;
	num_max = nbr_grid - 1;
/* col-up  n = a posicao na col (Array) a = a incrementacao do quadrado
 * da tabela i = posicao na primeira linha (Array), comeca como um para ir ate
 * ao numero maximo*/
	while (i < nbr_grid - 1)
	{
		n = 0;
		a = 1;
		if (argv[i] = nbr_grid)
		{
			while (Array[i] != '\0')
			{
				Array[i][n] += a;
				a++;
				n++;
			}
		}
		else if (argv[i] == 1)
			Array[i][n] = nbr_grid;
		i++;
	}
	i = 0;
	while (num_max > 1)
	{
		while (i < nbr_grid -1)
		{
			if (Array[i] = num_max)
			
			i++;	
		}
	}
}
