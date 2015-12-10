/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 11:36:22 by jbouille          #+#    #+#             */
/*   Updated: 2015/12/10 16:42:41 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1000000000
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"

int					get_next_line(int const fd, char **line);

typedef struct		s_files
{
	char			*overflow;
	int				fd;
}					t_files;

typedef struct		s_static
{
	t_files			files[1000];
	int				nb;
	char			buf[BUFF_SIZE + 1];
}					t_static;

#endif
