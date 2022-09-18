/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:10:30 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/18 19:15:10 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		array = (int *)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			array[i] = min++;
			i++;
		}
		return (array);
	}
}
