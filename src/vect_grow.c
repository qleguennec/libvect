/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_grow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 23:04:21 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/21 11:07:26 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

int			vect_grow
	(t_vect **v, size_t n)
{
	void	*new;
	size_t	new_total;

	if (!*v)
		return ((*v = ft_memalloc(sizeof(**v))) && vect_grow(v, n));
	new_total = (*v)->total * GROWTH_FACTOR * n;
	if (!(new = malloc(new_total)))
		return (0);
	ft_memcpy(new, (*v)->data, (*v)->used);
	free((*v)->data);
	(*v)->data = new;
	(*v)->total = new_total;
	return (1);
}
