/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_grow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 23:04:21 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/29 04:00:39 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

int
	vect_grow
	(t_vect *v
	, size_t n)
{
	void	*new;
	size_t	new_total;

	new_total = v->total * GROWTH_FACTOR * n;
	v->total = new_total;
	new = malloc(new_total);
	if (new == NULL)
		return (vect_err(v));
	ft_memcpy(new, v->data, v->used);
	free(v->data);
	v->data = new;
	return (1);
}
