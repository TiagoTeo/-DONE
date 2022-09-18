/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:50:57 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/18 17:06:25 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb -1;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i < 2147483629)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	if (nb >= 2147483629)
		return (2147483647);
	return (0);
}
