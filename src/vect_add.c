/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 11:33:41 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

int				vect_add
	(t_vect **v, void *data, size_t size)
{
	t_vect		*w;

	if (!*v)
		return ((*v = vect_init(data, size)) != NULL);
	if (!data)
		return (0);
	w = *v;
	if (!vect_req(w, size))
		return (0);
	ft_memcpy(w->data + w->used, data, size);
	w->used += size;
	return (1);
}
