/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:44:53 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/15 11:14:08 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst/liblst.h"
#include <stdio.h>

t_lst *l;

#define SPLIT(s, x) lst_split(s, sizeof(s) - 1, x, sizeof(x) - 1)

void print(void *data, void *ctxt)
{
	(void)ctxt;
	printf("%s\n", data);
}

int main(void)
{
	l = SPLIT("One day I will find the true words.  	And they will be simple.", " \t");
	lst_seq(l, &print, NULL);
}
