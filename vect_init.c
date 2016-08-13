/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:04:40 by qle-guen          #+#    #+#             */
/*   Updated: 2016/07/08 11:11:45 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"

t_vect			*vect_init
	(void *data, size_t size)
{
	t_vect		*ret;

	if (!(ret = ft_memalloc(sizeof(*ret))))
		return (NULL);
	if (size <= 0)
		return (ret);
	ret->total = size;
	if (!(ret->data = malloc(size)))
		return (NULL);
	if (!data)
		return (ret);
	ret->used = size;
	ft_memcpy(ret->data, data, size);
	return (ret);
}
