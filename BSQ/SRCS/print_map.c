/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:26:22 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/28 08:30:33 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_print_map(char **matrix, t_file mapf)
{
	int	i;

	i = 0;
	while (i < mapf.lines)
	{
		ft_putstr(matrix[i]);
		i++;
	}
}

void	ft_put_sq(char **matrix, t_file mapf, int size, t_coord first_coord)
{
	int	i;
	int	j;
	int	n;
	int	k;

	i = first_coord.x;
	k = size;
	while (k > 0)
	{
		n = size;
		j = first_coord.y;
		while (n > 0)
		{
			matrix[i][j] = mapf.full;
			j++;
			n--;
		}
		i++;
		k--;
	}
	ft_print_map(matrix, mapf);
}
