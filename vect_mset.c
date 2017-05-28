/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_mset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 21:33:59 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

static int
	copy_push
	(t_vect *v
	, unsigned char c
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
		return (0);
	ft_memcpy(new, v->data, n);
	ft_memset(new + n, c, size);
	ft_memcpy(new + n + size, v->data + n, v->used - n);
	free(v->data);
	v->used += size;
	v->data = new;
	return (1);
}

int
	vect_mset
	(t_vect *v
	, unsigned char c
	, size_t size
	, size_t n)
{
	if (n >= v->used)
	{
		vect_req(v, size);
		ft_memset(v->data + v->used, c, size);
		v->used += size;
		return (1);
	}
	if (!v->total)
	{
		v->total = size;
		v->data = malloc(size);
		if (v->data == NULL)
			return (0);
	}
	if (v->total < v->used + size)
		return (copy_push(v, c, size, n));
	ft_memmove(v->data + n + size, v->data + n, v->used - n);
	ft_memset(v->data + n, c, size);
	v->used += size;
	return (1);
}
