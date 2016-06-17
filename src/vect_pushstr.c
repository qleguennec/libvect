/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_pushstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 10:58:12 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 10:59:27 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>

int			vect_pushstr
	(t_vect **v, char *s, size_t n)
{
	return (vect_push(v, s, ft_strlen(s), n));
}
