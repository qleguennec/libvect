
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 18:40:19 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/24 18:24:41 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

int				vect_add
	(t_vect *v, void *data, size_t size)
{
	if (!data)
		return (0);
	if (!vect_req(v, size))
		return (0);
	ft_memcpy(v->data + v->used, data, size);
	v->used += size;
	return (1);
}
