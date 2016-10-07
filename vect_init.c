/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:04:40 by qle-guen          #+#    #+#             */
/*   Updated: 2016/10/07 19:55:55 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../malloc.h"
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
