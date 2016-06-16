/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 19:39:36 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/16 22:21:29 by qle-guen         ###   ########.fr       */
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
	vect_push(&v, "2 born", 6, 0);
	vect_push(&v, "4", 1, 0);
	vect_add(&v, " to code", 8);
	vect_push(&v, "qle-guen", 8, 0);
	vect_push(&v, ":", 1, 8);
	s = vect_getstr(v);
	printf("%s", s);
	vect_del(&v);
	free(s);
}
