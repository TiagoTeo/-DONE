/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:46:46 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/18 16:31:32 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	while (result < nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
