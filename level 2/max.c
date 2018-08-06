/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 20:53:00 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:17:50 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = tab[0];
	while (i < len)
	{
		if (tab[i] >= n)
			n = tab[i];
		i++;
	}
	return (n);
}

int		main(void)
{
	int tab[] = {6, 0, -3};

	printf("%d\n", max(tab, 3));
	return (0);
}
