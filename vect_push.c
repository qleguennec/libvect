/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/29 04:02:03 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

static int
	copy_push
	(t_vect *v
	, void *data
	, size_t size
	, size_t n)
{
	void		*new;

	if (v->total == 1)
		v->total++;
	while (v->total < v->used + size)
		v->total *= GROWTH_FACTOR;
	new = malloc(v->total);
	if (new == NULL)
		return (vect_err(v));
	ft_memcpy(new, v->data, n);
	ft_memcpy(new + n, data, size);
	ft_memcpy(new + n + size, v->data + n, v->used - n);
	free(v->data);
	v->used += size;
	v->data = new;
	return (1);
}

int
	vect_push
	(t_vect *v
	, void *data
	, size_t size
	, size_t n)
{
	if (n >= v->used)
		return (vect_add(v, data, size));
	if (!v->total)
	{
		v->total = size;
		v->data = malloc(size);
		if (v->data == NULL)
			return (0);
	}
	if (v->total < v->used + size)
		return (copy_push(v, data, size, n));
	ft_memmove(v->data + n + size, v->data + n, v->used - n);
	ft_memcpy(v->data + n, data, size);
	v->used += size;
	return (1);
}
