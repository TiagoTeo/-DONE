/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:52:17 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:46 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	litlen;

	litlen = ft_strlen(little);
	if (!litlen)
		return ((char *) big);
	if (!len)
		return (NULL);
	while (*(char *)big && (int)(len - litlen) != -1)
	{
		if (!ft_strncmp((char *) big, (char *) little, litlen))
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
