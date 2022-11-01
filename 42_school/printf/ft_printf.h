/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtiago-s <mtiago-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:34:57 by mtiago-s          #+#    #+#             */
/*   Updated: 2022/10/26 17:04:46 by mtiago-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

//In printf file
void	ft_formatcheck(char *arg, int *p);
int		ft_printf(const char *format, ...);
void	ft_print_ch(char *format, va_list args, int *i, int *res);
void	ft_print_nbr(char *format, va_list args, int *i, int *res);
void	ft_which_print(char *format, va_list args, int *i, int *res);

//Original Print functions with res
void	ft_putchar_fd(char c, int fd, int *res);
void	ft_putnbr_fd(int n, int fd, int *res);
void	ft_putstr_fd(char *s, int fd, int *res);

//Additional Print functions

void	ft_putunbr(unsigned int n, int *res);
void	ft_putnbr_hex(long nbr, int i, int *res);
void	ft_putnbr_p(unsigned long nbr, int *res);

#endif