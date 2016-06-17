/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 10:38:07 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>
#include <stdio.h>

static int		copy_push
	(t_vect *v, void *data, size_t size, size_t n)
{
	void		*new;

	if (v->total == 1)
		v->total++;
	while (v->total < v->used + size)
		v->total *= GROWTH_FACTOR;
	if (!(new = malloc(v->total)))
		return (0);
	new = ft_mempcpy(new, v->data, n);
	new = ft_mempcpy(new, data, size);
	new = ft_mempcpy(new, v->data + n, v->used - n);
	free(v->data);
	v->used += size;
	v->data = new - v->used;
	return (1);
}

int				vect_push
	(t_vect **v, void *data, size_t size, size_t n)
{
	t_vect		*w;

	if (!*v)
		return ((*v = vect_init(data, size)) != NULL);
	if (!data)
		return (0);
	w = *v;
	if (n >= w->used)
		return (vect_add(v, data, size));
	if (!w->total)
	{
		w->total = size;
		if (!(w->data = malloc(size)))
			return (0);
	}
	if (w->total < w->used + size)
		return (copy_push(w, data, size, n));
	ft_memmove(w->data + n + size, w->data + n, w->used - n);
	ft_memcpy(w->data + n, data, size);
	w->used += size;
	return (1);
}
