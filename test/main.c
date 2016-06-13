/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/13 19:04:12 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/13 21:26:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libvect.h"
#include "../lib/libft/includes/libft.h"

int main()
{
	t_vect *v;

	v = vect_init(NULL, 1);
	if (!v)
		return 1;
	vect_add(v, "42 ", 3);
	vect_add(v, "born ", 5);
	vect_add(v, "to", 2);
	vect_add(v, " code", 5);
	vect_add(v, "\n", 1);
	write(1, v->data, v->used);
	ft_putnbr(v->total);
}
