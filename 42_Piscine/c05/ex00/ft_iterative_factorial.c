/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:13:28 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/18 12:57:41 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		a = nb - 1;
		while (a >= 1)
		{
			nb = nb * a;
			a--;
		}
	}
	else
		return (0);
	return (nb);
}
