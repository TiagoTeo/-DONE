/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:30:13 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 14:42:39 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	valid_line(t_file mapf, char **matrix, t_coord *coord, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (matrix[coord->x][coord->y + i] == mapf.obs \
		|| matrix[coord->x][coord->y + i] == 0)
			return (-(coord->y + i));
	}
	return (1);
}

int	valid_column(t_file mapf, char **matrix, t_coord *coord, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (matrix[coord->x + i][coord->y] == mapf.obs \
		|| matrix[coord->x + i][coord->y] == 0)
			return (-(coord->y));
	return (1);
}

int	check_coord(t_file mapf, char **matrix, t_coord *coord, int size)
{
	int	next_x_line;
	int	next_x_column;

	next_x_line = valid_line(mapf, matrix, coord, size);
	next_x_column = valid_column(mapf, matrix, coord, size);
	if (matrix[coord->x][coord->y] == mapf.obs)
		return (0);
	if (next_x_line == 1 && next_x_column == 1)
		return (1);
	if (next_x_line != 1)
		coord->x = -next_x_line;
	else if (next_x_column != 1)
		coord->x = -next_x_column;
	return (0);
}

int	find_coord(t_file mapf, char **matrix, t_coord *coord, int size)
{
	if (matrix[coord->x][coord->y] != mapf.obs && size == 1 \
	&& matrix[coord->x][coord->y] != 0)
		return (1);
	else if (check_coord(mapf, matrix, coord, size))
	{
		coord->x++;
		coord->y++;
		return (find_coord(mapf, matrix, coord, size - 1));
	}
	else
	{
		return (0);
	}
}
