/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhtor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 13:19:03 by alikhtor          #+#    #+#             */
/*   Updated: 2018/02/16 21:31:00 by alikhtor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 13
# define FD_AMOUNT 1024

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

int		get_next_line(const int fd, char **line);
int		ft_find_n_or_end(char **ret, char **line);
int		ft_read_buf(const int fd, char **ret, char **line);

#endif
