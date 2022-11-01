/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:13:18 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:46 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formatcheck(char *arg, int *p)
{
	while (arg[*p])
	{
		if (arg[*p] == '%')
		{
			if (arg[*p + 1] != 'd' && arg[*p + 1] != 'c' && arg[*p + 1] != 's'
				&& arg[*p + 1] != 'p' && arg[*p + 1] != 'i'
				&& arg[*p + 1] != 'u' && arg[*p + 1] != 'x'
				&& arg[*p + 1] != 'X' && arg[*p + 1] != '%')
			{
				*p = -1;
				return ;
			}
			if (arg[*p + 1] == '%')
				*p += 1;
		}
		*p += 1;
	}
}

void	ft_print_ch(char *format, va_list args, int *i, int *res)
{
	if (format[*i] == 'c')
		ft_putchar_fd((char)(va_arg(args, int)), 1, res);
	else if (format[*i] == 's')
		ft_putstr_fd(va_arg(args, char *), 1, res);
	else if (format[*i] == '%')
	{
		write(1, &format[*i], 1);
		*res += 1;
	}
	else if (format[*i] == 'u')
		ft_putunbr(va_arg(args, unsigned int), res);
	else if (format[*i] == 'X')
		ft_putnbr_hex(va_arg(args, unsigned int), 1, res);
	else if (format[*i] == 'x')
		ft_putnbr_hex(va_arg(args, unsigned int), 2, res);
}

void	ft_print_nbr(char *format, va_list args, int *i, int *res)
{
	void	*p;

	p = 0;
	if (format[*i] == 'd' || format[*i] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, res);
	else if (format[*i] == 'p')
	{
		p = va_arg(args, void *);
		if (p == (void *)0)
			*res += write(1, "(nil)", 5);
		else if (p == (void *)LONG_MIN)
			*res += write(1, "0x8000000000000000", 18);
		else
		{
			*res += write(1, "0x", 2);
			ft_putnbr_p((unsigned long)p, res);
		}
	}
}

void	ft_which_print(char *format, va_list args, int *i, int *res)
{
	if (format[*i] == '%')
	{
		*i += 1;
		if (format[*i] == 'c' || format[*i] == 's' || format[*i] == '%'
			|| format[*i] == 'u' || format[*i] == 'X' || format[*i] == 'x')
			ft_print_ch(format, args, i, res);
		else if (format[*i] == 'd' || format[*i] == 'i' || format[*i] == 'p')
			ft_print_nbr(format, args, i, res);
	}
	else
		ft_putchar_fd(format[*i], 1, res);
	*i += 1;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		res;

	i = 0;
	len = 0;
	res = 0;
	ft_formatcheck((char *) format, &len);
	if (!format || len <= 0)
		return (write(1, "-1", 2));
	va_start(args, format);
	while (i < (len))
		ft_which_print((char *) format, args, &i, &res);
	va_end(args);
	return (res);
}

/*
int	main()
{
	//char c = 'T';
	//char *s = "(null)";
	//int i = 0;
	//char *p = &c;

	ft_printf(" %x", LONG_MAX);
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	i = ft_printf("%p\n", p);
	printf("o meu %d\n", i);
	i = printf("%p\n", p);
	printf("o dele %d\n", i);
	ft_printf("O meu nome: %s\n", s);
	ft_printf("Print de um Hex lower %x\n", i);
	ft_printf("Ola eu sou o Tiago\n");
	ft_printf("A minha primeira letra: %c\n", c);
	ft_printf("Eu tenho %d anos\n", i);
	ft_printf("Trocamos prendas no Natal dia: %i\n", i);
	ft_printf("Se quiser faco print do sinal de percentagem: %%\n");
	ft_printf("Isto tem que dar erro?\n", c);
	ft_printf("Print de um Hex upper %X\n", i);
}
*/