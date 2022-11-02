#include "get_next_line.h"

char	*get_next_line(int fd);

int	main(int ac, char **av)
{
	int	i = 1;
	char *name = "test";
		int fd = open(name, O_RDONLY);
		printf("test %d\n", i);
		i++;
		/* 1 */ get_next_line(fd);
		printf("test %d\n", i);
		i++;
		/* 2 */ get_next_line(fd);
		close(fd);
		char *temp;
		do
		{
			temp = get_next_line(fd);
			free(temp);
		} while (temp != NULL);
		printf("test %d\n", i);
		i++;
		/* 3 */ get_next_line(fd);
		fd = open(name, O_RDONLY);
		printf("test %d\n", i);
		i++;
		/* 4 */ get_next_line(fd);
		printf("test %d\n", i);
		i++;
		/* 5 */ get_next_line(fd);
		printf("test %d\n", i);
		i++;
		/* 6 */ get_next_line(fd);
		printf("test %d\n", i);
		i++;
		/* 7 */ get_next_line(fd);
		printf("test %d\n", i);
		i++;
		/* 8 */ get_next_line(fd);
}
	/* int		fd;
	char	*res;

	if (ac == 2)
	{
		fd = open(av[1], 0);
		while ((res = get_next_line(fd)) != NULL)
			printf("%s", res);
		(void) res;
	}
	if (ac == 1)
	{
		while ((res = get_next_line(1)) != NULL)
			printf("%s\n", res);
		(void) res;
	} */