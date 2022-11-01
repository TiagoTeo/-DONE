/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:54:37 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/13 19:51:18 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*nome1 = "tiagI";
	char	*nome2 = "tiago";
	int		result;

	result = ft_strncmp(nome1, nome2, 3);
	printf("%s\n%s\n", nome1, nome2);
	printf("%d", result);
}*/
