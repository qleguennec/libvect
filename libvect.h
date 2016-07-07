/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 16:01:26 by qle-guen          #+#    #+#             */
/*   Updated: 2016/07/06 14:15:57 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT_H
# define LIBVECT_H

# define GROWTH_FACTOR 1.618

# include <stdlib.h>

typedef struct	s_vect
{
	void		*data;
	size_t		used;
	size_t		total;
}				t_vect;

char			*vect_getstr(t_vect *v);
int				vect_add(t_vect *v, void *data, size_t size);
int				vect_addstr(t_vect *v, char *data);
int				vect_grow(t_vect *v, size_t n);
int				vect_mset(t_vect *v, unsigned char c, size_t size, size_t n);
int				vect_mset_end(t_vect *v, unsigned char c, size_t size);
int				vect_print(int fd, t_vect *v, size_t buff_size);
int				vect_push(t_vect *v, void *data, size_t size, size_t n);
int				vect_pushstr(t_vect *v, char *data, size_t n);
int				vect_req(t_vect *v, size_t n);
t_vect			*vect_init(void *data, size_t size);
t_vect			*vect_wrap(void *data, size_t size);
void			vect_debug(t_vect *v);
void			vect_del(t_vect *v);

#endif
