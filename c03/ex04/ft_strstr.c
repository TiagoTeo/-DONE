/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:31:28 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/13 12:31:33 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		count = 0;
		while (str[i + count] != '\0' && str[i + count] == to_find[count])
		{
			if (to_find[count + 1] == '\0')
				return (&str[i]);
			count++;
		}
		i++;
	}
	return (0);
}
