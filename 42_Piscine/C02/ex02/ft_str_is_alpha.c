/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:08:51 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/12 14:31:51 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str [i] != '\0')
	{
		if ((str [i] >= 65 && str [i] <= 90)
			|| (str [i] >= 97 && str [i] <= 122))
				i++;
		else
			return (0);
	}
	return (1);
}
