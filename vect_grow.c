/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_grow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 23:04:21 by qle-guen          #+#    #+#             */
/*   Updated: 2016/07/08 11:13:44 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"

int			vect_grow
	(t_vect *v, size_t n)
{
	void	*new;
	size_t	new_total;

	new_total = v->total * GROWTH_FACTOR * n;
	if (!(new = malloc(new_total)))
		VECT_EXIT;
	ft_memcpy(new, v->data, v->used);
	free(v->data);
	v->data = new;
	v->total = new_total;
	return (1);
}
