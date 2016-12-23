/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_wrap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 20:51:02 by qle-guen          #+#    #+#             */
/*   Updated: 2016/12/23 01:22:17 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"
#include "../libft/malloc.h"

t_vect			*vect_wrap
	(void *data, size_t size)
{
	t_vect		*ret;

	MALLOC1_ZERO(ret);
	ret->total = size;
	ret->used = size;
	ret->data = data;
	return (ret);
}
