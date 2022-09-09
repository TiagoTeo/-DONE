/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:48:49 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/09 16:18:50 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_strlen(char *str)
{
	int	i;

	int = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	change;

	a = 0;
	while (a < size - 1)
	{
		change = tab [a];
		tab [a] = tab [size - 1];
		tab [size -1] = change;
		a++;
		size--;
	}
}
/*
int	main(void)
{
	int array[5] = {1, 5, 3, 4, 5};

	ft_rev_int_tab(array, 5);
}*/
