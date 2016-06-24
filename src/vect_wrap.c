/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_wrap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 20:51:02 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/24 18:29:31 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

t_vect			*vect_wrap
	(void *data, size_t size)
{
	t_vect		*ret;

	if (!(ret = ft_memalloc(sizeof(*ret))))
		return (NULL);
	ret->total = size;
	ret->used = size;
	ret->data = data;
	return (ret);
}
