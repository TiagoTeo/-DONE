/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:11 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/09/24 18:06:11 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int mygetchar(void)
{
        static char buf[BUFSIZ];
        static char *bufp = buf;
        static int i = 0;

        if (i == 0)
        {
                i = read(0, buf, 1);
                bufp = buf;
        }
        if ( --i >= 0 )
        {
                return  *bufp++;
        }

        return EOF;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_count_char_file(char *str)
{
	char ch;
	int count=0;
	FILE *fptr;
	fptr=open(av[1], O_RDONLY);
	if(fptr==NULL)
	{
		getch();
		exit(0);
	}
	while((ch=getche())!='\r')
		fputc(ch,fptr);
	close(fptr);
	fptr=open(av[1], O_RDONLY);
	while((ch=fgetc(fptr))!=EOF)
		count++;
	close(fptr);
}

void	ft_error(int ac)
{
	char	*str_error_1;
	char	*str_error_2;
	char	*str_error_3;

	str_error_1 = "File name missing.";
	str_error_2 = "Too many arguments.";
	str_error_3 = "Cannot read file.";
	if (ac < 2)
		ft_putstr(str_error_1);
	else if (ac > 2 && ac > 0)
		ft_putstr(str_error_2);
	else if (ac < 0)
		ft_putstr(str_error_3);
}

int	main(int ac, char **av)
{
	int		fd;
	int		x;
	char	buf[];

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
	/* talvez contar a quantitade de caracteres no ficheiro e por na variavel x*/
	x = ft_count_char_file(av[1]);
	read(fd, buf, x);
	buf[x] = '\0';
	ft_putstr(buf);
	close(fd);
}
