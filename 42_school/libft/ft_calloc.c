/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:59:27 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/31 13:08:39 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*res;

	res = (void *)malloc(size * nitems);
	if (!res)
		return (NULL);
	ft_bzero(res, (size * nitems));
	return (res);
}
/* 	unsigned long	temp;

	temp = size * nitems;
	if (nitems != temp / size)
		return (NULL); */
