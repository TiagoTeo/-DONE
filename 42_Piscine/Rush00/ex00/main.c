/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:50:55 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/11 20:26:15 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	t;
	int	v;

	if (argc == 3)
	{
		t = ft_atoi(argv[1]);
		v = ft_atoi(argv[2]);
		rush(t, v);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (str[i] <= 48 && str[i] >= 57)
			return (0);
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result);
}
