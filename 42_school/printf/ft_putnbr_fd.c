/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:37:25 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/21 17:02:52 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *res)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd, res);
		ft_putchar_fd('2', fd, res);
		ft_putnbr_fd(147483648, fd, res);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd, res);
		ft_putnbr_fd(-n, fd, res);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd, res);
		ft_putnbr_fd(n % 10, fd, res);
	}	
	else
		ft_putchar_fd(n + 48, fd, res);
}
