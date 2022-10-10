/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:30:25 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/27 21:34:19 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_input(void)
{
	char	c;
	int		i;
	int		fd;
	t_file	mapf;

	i = -1;
	c = 0;
	fd = open("map_stdin", O_CREAT | O_WRONLY, 0600);
	while (c != '\n')
	{
		read(STDIN_FILENO, &c, 1);
		write (fd, &c, 1);
	}
	mapf = first_line_map("map_stdin");
	while (++i < mapf.lines)
	{
		read(STDIN_FILENO, &c, 1);
		write(fd, &c, 1);
		while (c != '\n')
		{
			read(STDIN_FILENO, &c, 1);
			write(fd, &c, 1);
		}
	}
	return ("map_stdin");
}
