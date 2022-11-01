/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:49:37 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/08 16:54:26 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcomb(int i, int ii, int iii)
{
	i = i + 48;
	ii = ii + 48;
	iii = iii + 48;
	write (1, &i, 1);
	write (1, &ii, 1);
	write (1, &iii, 1);
	if (i < '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n_1;
	int	n_2;
	int	n_3;

	n_1 = 0;
	while (n_1 <= 7)
	{
		n_2 = n_1 + 1;
		while (n_2 <= 8)
		{
			n_3 = n_2 + 1;
			while (n_3 <= 9)
			{
				ft_putcomb(n_1, n_2, n_3);
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
