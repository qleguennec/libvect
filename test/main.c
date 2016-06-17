/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 19:39:36 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/17 11:34:52 by qle-guen         ###   ########.fr       */
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
	v = vect_init(NULL, 0);
	vect_addstr(&v, "qle-guen");
	vect_addstr(&v, " = ");
	vect_addstr(&v, "42n");
	vect_pushstr(&v, "bor", 13);
	vect_pushstr(&v, "<", 0);
	vect_pushstr(&v, ">", 9);
	vect_addstr(&v, "2code");
	s = vect_getstr(v);
	vect_del(&v);
	if (!(ft_strequ(s, "<qle-guen> = 42born2code")))
	{
		ft_putstr("error, got: ");
		ft_putendl(s);
		return (1);
	}
	ft_putendl("OK");
	return (0);
}
