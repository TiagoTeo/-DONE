/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:56:27 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/09 12:35:40 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putpoint(char *c)
{
	char	a;

	a = *c;
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putpoint(str);
		str++;
	}
}
/*int	main(void)
{
	char a[6] = "tiago";
	ft_putstr(a);
}*/
