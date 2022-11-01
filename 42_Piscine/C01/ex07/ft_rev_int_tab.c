/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:48:49 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/10 12:00:07 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	change;

	a = 0;
	while (a < size)
	{
		change = tab [a];
		tab [a] = tab [size - 1];
		tab [size -1] = change;
		a++;
		size--;
	}
}
