/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:11:17 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 12:50:41 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = -1;
	res = 0;
	while (str[++i])
		res = res * 10 + (str[i] - 48);
	return (res);
}

t_file	len_of_line(char *str)
{
	char	c;
	t_file	mapf;
	int		counter;

	counter = 0;
	mapf.file = open(str, 0);
	read(mapf.file, &c, 1);
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		counter++;
	}
	if (counter < 4)
	{
		mapf.lines = 0;
		return (mapf);
	}
	mapf.lines = 1;
	mapf.buf = (char *)malloc(sizeof(char) * counter + 1);
	close(mapf.file);
	return (mapf);
}

t_file	first_line_map(char *str)
{
	t_file	mapf;
	char	c;

	mapf = len_of_line(str);
	if (!mapf.lines)
		return (mapf);
	mapf.file = open(str, 0);
	mapf.lines = 0;
	read(mapf.file, &c, 1);
	mapf.buf[mapf.lines] = c;
	while (c != '\n')
	{
		read(mapf.file, &c, 1);
		mapf.buf[++mapf.lines] = c;
	}
	mapf.buf[mapf.lines] = '\0';
	mapf.full = mapf.buf[mapf.lines - 1];
	mapf.obs = mapf.buf[mapf.lines - 2];
	mapf.empty = mapf.buf[mapf.lines - 3];
	mapf.buf[mapf.lines - 3] = '\0';
	mapf.lines = ft_atoi(mapf.buf);
	close(mapf.file);
	return (mapf);
}
