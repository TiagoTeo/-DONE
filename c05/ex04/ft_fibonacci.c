/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:22:06 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/18 15:45:14 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;
	int	o;
	int	p;
	int	i;

	n = 0;
	o = 1;
	i = 3;
	if (index == 1 || index == 2)
		return (1);
	else if (index == 0)
		return (0);
	while (i <= index)
	{
		p = n;
		n = o;
		o = n + p;
		p = o + n;
		i++;
	}
	return (p);
}
