/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:23:19 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 11:39:16 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_file	read_first_line(t_file mapf, char *str)
{
	char	c;

	mapf.file = open(str, 0);
	read(mapf.file, &c, 1);
	while (c != '\n')
		read(mapf.file, &c, 1);
	return (mapf);
}

char	**create_matrix(t_file mapf, char *str)
{
	char	**matrix;
	int		i;
	int		j;
	char	c;

	matrix = (char **)malloc(sizeof(char *) * mapf.lines);
	i = -1;
	while (++i < mapf.lines)
		matrix[i] = (char *)malloc(sizeof(char) * mapf.colunas + 1);
	i = -1;
	mapf = read_first_line(mapf, str);
	while (++i < mapf.lines)
	{
		j = -1;
		while (++j < mapf.colunas)
		{
			read(mapf.file, &c, 1);
			matrix[i][j] = c;
		}
		read(mapf.file, &c, 1);
		matrix[i][j] = 0;
	}
	close(mapf.file);
	return (matrix);
}
