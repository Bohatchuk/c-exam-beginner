/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:54:13 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 15:27:36 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int n)
{
	return (n >= 0 ? n : -n);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int size;
	int sign;
	int *res;

	i = 0;
	size = ft_abs(start - end);
	res = (int *)malloc(sizeof(int) * (size + 1));
	sign = (start >= end ? -1 : 1);
	while (i <= size)
	{
		res[i] = end - (i * sign);
		i++;
	}
	return (res);
}
