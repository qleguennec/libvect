/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/18 01:48:49 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

static int		copy_push
	(t_vect *v, unsigned char c, size_t size, size_t n)
{
	void		*new;

	if (v->total == 1)
		v->total++;
	while (v->total < v->used + size)
		v->total *= GROWTH_FACTOR;
	if (!(new = malloc(v->total)))
		return (0);
	ft_mempcpy(new, v->data, n);
	ft_memset(new + n, c, size);
	ft_mempcpy(new + n + size, v->data + n, v->used - n);
	free(v->data);
	v->used += size;
	v->data = new - v->used;
	return (1);
}

int				vect_memset
	(t_vect **v, unsigned char c, size_t size, size_t n)
{
	t_vect		*w;

	if (!(*v || (*v = ft_memalloc(sizeof(**v)))))
		return (0);
	w = *v;
	if (n >= w->used)
	{
		if (!vect_req(w, size))
			return (0);
		ft_memset(w->data + w->used, c, size);
		w->used += size;
		return (1);
	}
	if (!w->total)
	{
		w->total = size;
		if (!(w->data = malloc(size)))
			return (0);
	}
	if (w->total < w->used + size)
		return (copy_push(w, c, size, n));
	ft_memmove(w->data + n + size, w->data + n, w->used - n);
	ft_memset(w->data + n, c, size);
	w->used += size;
	return (1);
}
