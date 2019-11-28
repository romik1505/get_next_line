/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:09:12 by cniranye          #+#    #+#             */
/*   Updated: 2019/11/28 22:09:15 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# define BUFF_SIZE 10000

typedef struct		s_mlist
{
	void			*data;
	size_t			size;
	int				x;
}					t_mlist;

enum				e_strings{glue, duplicate, linebreak};

int					get_next_line(const int fd, char **line);

#endif
