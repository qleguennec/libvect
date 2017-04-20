/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 01:24:20 by qle-guen          #+#    #+#             */
/*   Updated: 2017/04/20 20:25:56 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

int
	vect_memcmp
	(t_vect *a
	, unsigned char *s
	, size_t n)
{
	unsigned char	*s1;

	s1 = a->data;
	while (*s1 == *s
		&& (void *)s1 < a->data + a->used
		&& *s
		&& n)
	{
		s1++;
		s++;
		n++;
	}
	return (*s - *s1);
}
