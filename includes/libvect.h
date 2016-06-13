/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:01:26 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/13 20:58:17 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT_H
# define LIBVECT_H

#define GROWTH_FACTOR 1.618

#include <stdlib.h>

typedef struct	s_vect
{
	void		*data;
	size_t		used;
	size_t		total;
}				t_vect;

t_vect			*vect_init(void *data, size_t size);
int				vect_add(t_vect *v, void *data, size_t size);

#endif
