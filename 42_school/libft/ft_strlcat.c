/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:35:09 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:46 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	temp;

	if (!dest && !size)
		return (0);
	temp = ft_strlen(dest) + ft_strlen(src);
	if (ft_strlen(dest) < size)
	{
		size = size - ft_strlen(dest) - 1;
		dest = dest + ft_strlen(dest);
		while (*src != 0)
		{
			if (size <= 0)
				break ;
			else
				*dest++ = *src++;
			size--;
		}
		*dest = '\0';
		return (temp);
	}
	else
		return (ft_strlen(src) + size);
}
