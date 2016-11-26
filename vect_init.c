/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:04:40 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/14 14:55:24 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/malloc.h"
#include "../libft/libft.h"

t_vect			*vect_init
	(void *data, size_t size)
{
	t_vect		*ret;

	ret = ft_memalloc(sizeof(*ret));
	ret->total = size;
	MALLOC(ret->data, size);
	ret->used = size;
	ft_memcpy(ret->data, data, size);
	return (ret);
}
