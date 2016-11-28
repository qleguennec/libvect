/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:52:14 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/27 17:27:41 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/malloc.h"

t_vect		*vect_new(void *data, size_t size)
{
	t_vect	*ret;

	MALLOC_SIZEOF(ret);
	vect_init(ret);
	vect_add(ret, data, size);
	return (ret);
}
