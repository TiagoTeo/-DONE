/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:50:55 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/11 17:31:59 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	t;
	int	v;

	t = atoi(argv[1]);
	v = atoi(argv[2]);
	if (argc == 3)
		rush(t, v);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (str[0] >= 48 && str[0] <= 57)
	{
		while (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
	}
	else
		write(1, "error 404\n", 10);
	return (result);
}
