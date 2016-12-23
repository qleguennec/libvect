/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_str_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 22:57:50 by qle-guen          #+#    #+#             */
/*   Updated: 2016/12/23 01:31:07 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/libft.h"

char		*vect_str_get(t_vect *v)
{
	char	*s;

	return ((s = ft_strnew(v->used)) ? ft_memcpy(s, v->data, v->used) : 0);
}