/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maplength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:11:49 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/27 18:47:15 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_maplength(char *str)
{
	int		i;
	int		f;
	char	c;

	f = open(str, 0);
	i = 0;
	read(f, &c, 1);
	while (c != '\n')
		read(f, &c, 1);
	read(f, &c, 1);
	while (c != '\n')
	{
		read(f, &c, 1);
		i++;
	}
	close(f);
	return (i);
}
