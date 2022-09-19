/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:17:41 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/19 14:52:37 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

char	*ft_strjoin_assist(int size, char **strs, char *sep)
{
	int	a;
	int	k;
	int	i;

	k = 1;
	i = 0;
	a = 0;
	while (size > 0 || strs[a] != '\0')
	{
		if (k == 1 && strs[a])
		{
			ft_strcat(str, str[a]);
			a++;
			k = 0;
			size--;
		}
		else if (k == 0)
		{
			ft_strcat(str, sep);
			k = 1;
		}
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	str = (char *)malloc(sizeof (char) * size);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = ft_strjoin_assist(size, strs, sep);
	return (str);
}
