/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:36:08 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/13 12:49:21 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	result;

	i = 0;
	count = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	while (dest[count] != '\0')
		count++;
	if (size <= count)
		result += size;
	else
		result += count;
	while (src[i] && (count + 1) < size)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (result);
}
