/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_wrap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 20:51:02 by qle-guen          #+#    #+#             */
/*   Updated: 2016/10/07 18:51:12 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"

t_vect			*vect_wrap
	(void *data, size_t size)
{
	t_vect		*ret;

	ret = ft_memalloc(sizeof(*ret));
	ret->total = size;
	ret->used = size;
	ret->data = data;
	return (ret);
}
