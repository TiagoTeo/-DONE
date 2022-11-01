/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:22:06 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/14 16:41:30 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (s != NULL && f != NULL)
	{
		size = ft_strlen(s);
		while (i < size)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
