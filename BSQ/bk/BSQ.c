/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:33 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/28 08:32:37 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	t_coord	curr_coord;
	t_coord	*coord;
	int		i;
	char	*str;

	i = 1;
	coord = &curr_coord;
	if (ac == 1)
	{
		str = ft_input();
		cut_lines(str, coord);
		return (0);
	}
	while (i < ac)
	{
		cut_lines(av[i], coord);
		if (i != ac - 1)
			write (1, "\n", 1);
		i++;
	}
}

void	cut_lines(char *str, t_coord *coord)
{
	t_file	mapf;
	char	**matrix;

	if (open(str, 0) == -1)
	{
		write (1, "map error\n", 11);
		return ;
	}
	mapf = first_line_map(str);
	if (!mapf.lines)
	{
		write (1, "map error\n", 11);
		return ;
	}
	mapf.colunas = ft_maplength(str);
	if (!(ft_check_map(str, mapf)))
	{
		write (1, "map error\n", 11);
		return ;
	}
	matrix = create_matrix(mapf, str);
	coord->x = 0;
	coord->y = 0;
	find_write_square(matrix, mapf, coord);
	close (mapf.file);
	free(matrix);
}

void	find_write_square(char **matrix, t_file mapf, t_coord *coord)
{
	int		size;
	int		suc;
	t_coord	first_coord;

	first_coord.x = 0;
	first_coord.y = 0;
	size = ft_find_sqmax(mapf);
	suc = find_coord(mapf, matrix, coord, size);
	while (!suc && size > 0)
	{
		coord->x = first_coord.x;
		coord->y = first_coord.y;
		suc = find_coord(mapf, matrix, coord, size);
		if (suc)
			break ;
		first_coord = change_coord(mapf, coord, first_coord, size);
		if (first_coord.x == 0 && first_coord.y == 0)
		{
			size--;
		}
	}
	if (suc)
		ft_put_sq(matrix, mapf, size, first_coord);
	else
		write (1, "map error\n", 11);
}
