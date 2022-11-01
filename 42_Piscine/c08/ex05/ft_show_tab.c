/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:54:37 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/21 12:13:30 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= -2147483648 && nbr <= 2147483647)
	{
		if (nbr == 2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nbr);
		}
		else if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
			ft_putnbr(nbr % 10);
		}
		else
			ft_putchar(nbr + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	n;

	i = 0;
	while (par[i].str)
	{
		n = 0;
		while (par[i].str[n] != '\0')
		{
			write(1, &par[i].str[n], 1);
			n++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		n = 0;
		while (par[i].copy[n] != '\0')
		{
			write(1, &par[i].copy[n], 1);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
}
