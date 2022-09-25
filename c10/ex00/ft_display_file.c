/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:11 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/25 17:00:39 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_error(int ac)
{
	char	*str_error_1;
	char	*str_error_2;
	char	*str_error_3;

	str_error_1 = "File name missing.\n";
	str_error_2 = "Too many arguments.\n";
	str_error_3 = "Cannot read file.\n";
	if (ac < 2)
		ft_putstr(str_error_1);
	else if (ac > 2 && ac > 0)
		ft_putstr(str_error_2);
	else if (ac < 0)
		ft_putstr(str_error_3);
}

char	ft_getc(FILE fd)
{
	char	c;

	read (fd, c, 1);
	return (c);	
}

int	ft_count_char_file(FILE fd)
{
	char	c;
	int		count;

	c = ft_getc(fd);
	while (c != EOF)
	{
		count++;
		c = ft_getc(fd);
	}
	return (count);
}

int	main(int ac, char **av)
{
	FILE	fd;
	int		x;
	char	*buf;

	if (ac != 2)
	{
		ft_error(ac);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_error(fd);
		return (0);
	}
	x = ft_count_char_file(fd);
	read(fd, buf, x);
	buf[x] = '\0';
	ft_putstr(buf);
	close(fd);
}
