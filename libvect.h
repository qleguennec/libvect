/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:01:26 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/29 04:02:36 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT_H
# define LIBVECT_H

# define GROWTH_FACTOR	1.618

#include "../libft/libft.h"

typedef struct	s_vect
{
	void		*data;
	size_t		used;
	size_t		total;
	void		(*malloc_err_f)(void *);
}				t_vect;

int				vect_add(t_vect *v, void *data, size_t size);
int				vect_cmp(t_vect *a, t_vect *b);
int				vect_grow(t_vect *v, size_t n);
int				vect_memcmp(t_vect *a, unsigned char *s, size_t n);
int				vect_mset(t_vect *v, unsigned char c, size_t size, size_t n);
int				vect_mset_end(t_vect *v, unsigned char c, size_t size);
int				vect_push(t_vect *v, void *data, size_t size, size_t n);
int				vect_req(t_vect *v, size_t n);
void			*vect_memmem(t_vect *a, unsigned char *s, size_t n);
void			vect_del(t_vect *v);
void			vect_init(t_vect *v);
int				vect_err(t_vect *v);

#endif
