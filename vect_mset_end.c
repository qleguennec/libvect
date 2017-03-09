/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_mset_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 18:35:23 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/07 13:04:54 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

inline int
	vect_mset_end
	(t_vect *v
	 , unsigned char c
	 , size_t size)
{
	return (vect_mset(v, c, size, v->used));
}
