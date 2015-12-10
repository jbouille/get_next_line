/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 11:48:22 by jbouille          #+#    #+#             */
/*   Updated: 2015/12/10 16:18:36 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	rtcharin(char *buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	intab(int fd, t_static *var)
{
	int	i;

	i = 0;
	while (i < var->nb)
	{
		if (var->files[i].fd == fd)
			return (i);
		i++;
	}
	var->nb += 1;
	var->files[i].fd = fd;
	var->files[i].overflow = ft_strnew(0);
	if (!var->files[i].overflow)
		return (-1);
	return (i);
}

int	get_line(int rtchar, int index, t_static *var, char **line)
{
	if (!(*line = ft_strnew(rtchar)))
		return (-1);
	*line = ft_strncpy(*line, var->files[index].overflow, rtchar);
	var->files[index].overflow = var->files[index].overflow + rtchar + 1;
	return (1);
}

int	get_next_line(int const fd, char **line)
{
	int				ret;
	int				rtchar;
	int				i;
	static t_static	var;

	i = intab(fd, &var);
	if (fd < 0 || line == NULL || i < 0)
		return (-1);
	*line = NULL;
	if ((rtchar = rtcharin(var.files[i].overflow)) >= 0)
		return (get_line(rtchar, i, &var, line));
	while (rtchar == -1 && (ret = read(fd, var.buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		var.buf[ret] = '\0';
		var.files[i].overflow = ft_strjoin(var.files[i].overflow, var.buf);
		if ((rtchar = rtcharin(var.files[i].overflow)) >= 0)
			return (get_line(rtchar, i, &var, line));
	}
	if (var.files[i].overflow[0] != '\0' && rtchar == -1 && ret == 0)
		return (get_line(ft_strlen(var.files[i].overflow), i, &var, line));
	return (0);
}
