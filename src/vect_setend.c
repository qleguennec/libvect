/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_setend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 18:35:23 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/24 18:36:18 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>

int			vect_setend
	(t_vect *v, unsigned char c, size_t size)
{
	return (vect_memset(v, c, size, v->used));
}
