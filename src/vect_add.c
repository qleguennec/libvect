/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/16 20:40:27 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

int				vect_add
	(t_vect *v, void *data, size_t size)
{
	size_t		n;

	if (!v || !data)
		return (0);
	if (!v->total)
	{
		v->total = size;
		if (!(v->data = malloc(size)))
			return (0);
	}
	if (v->total - v->used >= size)
	{
		ft_memcpy(v->data + v->used, data, size);
		v->used += size;
		return (1);
	}
	if (v->total == 1)
		v->total++;
	n = 1;
	while (v->total * n * GROWTH_FACTOR < v->used + size)
		n++;
	return (vect_grow(v, n) ? vect_add(v, data, size) : 0);
}
