/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/13 21:25:15 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>
#include <stdio.h>

int				vect_add
	(t_vect *v, void *data, size_t size)
{
	void		*new;

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
	while (v->total - v->used < size)
		v->total *= GROWTH_FACTOR;
	if (!(new = malloc(v->total)))
		return (0);
	ft_memcpy(new, v->data, v->used);
	free(v->data);
	v->data = new;
	return (vect_add(v, data, size));
}
