/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfunctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:39:17 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:46 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *res)
{
	if (n <= UINT_MAX)
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, 1, res);
			ft_putnbr_fd(n % 10, 1, res);
		}	
		else
			ft_putchar_fd(n + 48, 1, res);
	}
}

void	ft_putnbr_hex(long nbr, int i, int *res)
{
	long long	nb;
	char		*base;

	if (i == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	nb = (long long) nbr;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1, res);
		nb *= -1;
	}
	if (nb < 16)
	{
		ft_putchar_fd(base[nb], 1, res);
	}
	if (nb >= 16)
	{
		ft_putnbr_hex(nb / 16, i, res);
		ft_putnbr_hex(nb % 16, i, res);
	}
}

void	ft_putnbr_p(unsigned long nbr, int *res)
{
	char		*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		ft_putchar_fd(base[nbr], 1, res);
	}
	if (nbr >= 16)
	{
		ft_putnbr_p(nbr / 16, res);
		ft_putnbr_p(nbr % 16, res);
	}
}
/*
int main ()
{	
	int i = 0;
	int *res = &i;
	ft_putnbr_hex(3735929054u, 2, res);
	printf("\n%d", i);
}
*/
