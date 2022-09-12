/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:50:36 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/12 14:39:11 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	ii;

	ii = 0;
	while (str [ii] != '\0')
	{
		if ((str [ii] >= 65 && str [ii] <= 90))
			str [ii] = str [ii] + 32;
		ii++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prim;

	i = 0;
	prim = 1;
	ft_strlowcase(str);
	while (str [i] != '\0')
	{
		if (str [i] >= 97 && str [i] <= 122)
		{
			if (prim == 1)
				str [i] = str [i] - 32;
			prim = 0;
		}
		else if (str [i] >= 48 && str [i] <= 57)
			prim = 0;
		else
			prim = 1;
		i++;
	}
	return (str);
}
