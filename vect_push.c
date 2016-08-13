/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/07/08 11:13:07 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"

static int		copy_push
	(t_vect *v, void *data, size_t size, size_t n)
{
	void		*new;

	if (v->total == 1)
		v->total++;
	while (v->total < v->used + size)
		v->total *= GROWTH_FACTOR;
	if (!(new = malloc(v->total)))
		VECT_EXIT;
	new = ft_mempcpy(new, v->data, n);
	new = ft_mempcpy(new, data, size);
	new = ft_mempcpy(new, v->data + n, v->used - n);
	free(v->data);
	v->used += size;
	v->data = new - v->used;
	return (1);
}

int				vect_push
	(t_vect *v, void *data, size_t size, size_t n)
{
	if (!data)
		VECT_EXIT;
	if (n >= v->used)
		return (vect_add(v, data, size));
	if (!v->total)
	{
		v->total = size;
		if (!(v->data = malloc(size)))
			VECT_EXIT;
	}
	if (v->total < v->used + size)
		return (copy_push(v, data, size, n));
	ft_memmove(v->data + n + size, v->data + n, v->used - n);
	ft_memcpy(v->data + n, data, size);
	v->used += size;
	return (1);
}
