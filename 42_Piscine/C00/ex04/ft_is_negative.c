/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:22:02 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/08 16:36:35 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n >= 0)
	{
		sign = 'P';
		write (1, &sign, 1);
	}
	else
	{
		sign = 'N';
		write (1, &sign, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-45);
}*/
