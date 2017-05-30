/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_err.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 03:57:28 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/30 16:33:29 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

int
	vect_err
	(t_vect *v)
{
	static const char	*msg = "malloc error\n";

	(void)v;
	write(1, msg, sizeof(msg) - 1);
	exit(0);
	return (0);
}
