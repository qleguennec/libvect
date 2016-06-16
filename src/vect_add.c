/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/16 22:16:44 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

static int		grow
	(t_vect **v, void *data, size_t size)
{
	size_t		n;
	t_vect		*w;

	w = *v;
	if (w->total == 1)
		w->total++;
	n = 1;
	while (w->total * n * GROWTH_FACTOR < w->used + size)
		n++;
	return (vect_grow(w, n) ? vect_add(v, data, size) : 0);
}

int				vect_add
	(t_vect **v, void *data, size_t size)
{
	t_vect		*w;

	if (!*v)
	{
		*v = vect_init(data, size);
		return (*v != NULL);
	}
	if (!data)
		return (0);
	w = *v;
	if (!w->total)
	{
		w->total = size;
		if (!(w->data = malloc(size)))
			return (0);
	}
	if (w->total - w->used >= size)
	{
		ft_memcpy(w->data + w->used, data, size);
		w->used += size;
		return (1);
	}
	return (grow(v, data, size));
}
