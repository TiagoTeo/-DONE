#include <stdlib.h>
#include <stdio.h>

int *ft_is_negative(int *str, int start, int end);
int *ft_is_positive(int *str, int start, int end);

int	*ft_range(int start, int end)
{
	int *Array;

	if (start > end)
		Array = ft_is_negative(Array, start, end);
	else if (start < end)
		Array = ft_is_positive(Array, start, end);
	else
	{
		Array[0] = start;
		Array[1] = '\0';
	}
	return (Array);
}

int *ft_is_negative(int *str, int start, int end)
{
	int n;
	int m;

	n = 0;
	m = start;
	while (m != end)
	{
		n++;
		m--;
	}
	str =  (int *)malloc(sizeof(int) * n);
	n = 0;
	while (start != end - 1)
	{
		str[n] = start;
		start--;
		n++;
	}
	str[n] = '\0';
	return (str);
}

int	*ft_is_positive(int *str, int start, int end)
{
	int a;
	int b;

	a = 0;
	b = start;
	while (b != end)
	{
		a++;
		b++;
	}
	str = (int *)malloc(sizeof(int) * a);
	a = 0;
	while (start != end + 1)
	{
		str[a] = start;
		start++;
		a++;
	}
	str[a] = '\0';
	return (str);
}

int	main(void)
{
	int t;
	int v;
	int *s;
	int i;

	i = 0;
	t = 2;
	v = 6;
	s = ft_range(t, v);
	while (i < 5)
	{
		printf("%d " s[i]);
		i++;
	}
}
