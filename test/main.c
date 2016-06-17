/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 19:39:36 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 10:39:27 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libvect.h>
#include <libft.h>
#include <stdio.h>

int main()
{
	t_vect *v;
	char *s;

	v = NULL;
	vect_add(&v, "qle-guen", 8);
	vect_add(&v, " = ", 3);
	vect_add(&v, "42n", 3);
	vect_push(&v, "bor", 3, 13);
	vect_push(&v, "<", 1, 0);
	vect_push(&v, ">", 1, 9);
	vect_add(&v, "2code", 5);
	s = vect_getstr(v);
	printf("%s", s);
	vect_del(&v);
	free(s);
}
