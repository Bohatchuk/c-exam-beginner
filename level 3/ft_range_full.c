/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:06:01 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 14:49:47 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_abs(int n)
{
	return (n >= 0 ? n : -n);
}

int		*ft_range(int start, int end)
{
	int	i;
	int	size;
	int sign;
	int *res;

	i = 0;
	size = ft_abs(start - end);
	res = (int *)malloc(sizeof(int) * (size + 1));
	sign = (start >= end ? -1 : 1);
	while (i <= size)
	{
		res[i] = start + (i * sign);
		printf("%i\n", res[i]);
		i++;
	}
	return (res);
}

int 	main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		ft_range(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
