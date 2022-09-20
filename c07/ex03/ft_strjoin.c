/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:17:41 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/20 17:09:35 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_omegacount(char **strs, char *sep, int size)
{
	int	s;
	int	i;
	int	n;

	s = 0;
	i = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n])
		{
			s++;
			n++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	s += i * (size - 1);
	return (s);
}

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

char	*ft_strjoin_assist(int size, char **strs, char *sep, char *str)
{
	int		a;
	int		k;
	int		i;

	k = 0;
	i = 0;
	a = 1;
	while (size > 1 && strs[a])
	{
		if (k == 1 && strs[a])
		{
			ft_strcat(str, strs[a]);
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
	int		i;

	i = 0;
	if (size >= 0)
	{
		str = (char *)malloc(sizeof (char) * ft_omegacount(strs, sep, size) + 1);
		if (size == 0)
			return ((char *)malloc(sizeof(char)));
		while (strs[0][i] != '\0')
		{
			str[i] = strs[0][i];
			i++;
		}
		str[i] = '\0';
		str = ft_strjoin_assist(size, strs, sep, str);
		return (str);
	}
	return (0);
}
