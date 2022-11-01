/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvenanci <mvenanci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:09:54 by mvenanci          #+#    #+#             */
/*   Updated: 2022/09/28 13:54:50 by mvenanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_file
{
	int		file;
	int		colunas;
	int		lines;
	char	empty;
	char	obs;
	char	full;
	char	*buf;

}	t_file;

typedef struct s_coord
{
	int	x;
	int	y;
}	t_coord;

t_file	first_line_map(char *str);
int		ft_maplength(char *str);
int		ft_check_map(char *map, t_file mapS);
char	**create_matrix(t_file mapf, char *str);
int		find_coord(t_file mapf, char **matrix, t_coord *coord, int size);
t_coord	change_coord(t_file mapf, t_coord *coord, t_coord first_coord, \
int size);
int		ft_find_sqmax(t_file mapf);
void	ft_putstr(char *str);
void	ft_print_map(char **matrix, t_file mapf);
void	ft_put_sq(char **matrix, t_file mapf, int size, t_coord first_coord);
char	*ft_input(void);
void	find_write_square(char **matrix, t_file mapf, t_coord *coord);
void	cut_lines(char *str, t_coord *coord);
int		ft_find_max_line_or_column(t_file mapf);
int		find_max_size(t_file mapf, char **matrix);

#endif
