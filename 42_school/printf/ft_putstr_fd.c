/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:29:32 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/21 17:49:03 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *res)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
			*res += 1;
		}
	}
	else if (!s)
	{
		write(1, "(null)", 6);
		*res += 6;
	}
}
