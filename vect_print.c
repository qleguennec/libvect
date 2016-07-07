/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 14:02:07 by qle-guen          #+#    #+#             */
/*   Updated: 2016/07/06 14:57:04 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include <unistd.h>

int			vect_print
	(int fd, t_vect *v, size_t buff_size)
{
	void	*p;

	if (!buff_size || buff_size > v->used)
		buff_size = v->used;
	p = v->data;
	while (p + buff_size < v->data + v->used)
	{
		if (write(fd, p, buff_size) < 0)
			return (0);
		p += buff_size;
	}
	return (write(fd, p, v->data + v->used - p) < 0 ? 0 : 1);
}
