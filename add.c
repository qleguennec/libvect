/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 04:29:43 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/29 04:33:06 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

int
	add
	(int ret
		, t_vect *v
		, char *data)
{
	vect_add(v, data, ft_strlen(data));
	return (ret);
}