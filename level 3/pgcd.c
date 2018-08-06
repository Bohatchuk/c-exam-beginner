/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 18:35:02 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 18:49:19 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int		pgcd(unsigned int nmb1, unsigned int nmb2)
{
	int div;
	int i;

	div = 1;
	i = 1;
	while (i <= ft_min(nmb1, nmb2))
	{
		if (nmb1 % i == 0 && nmb2 % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%i\n", pgcd(atoi(argv[1]), atoi(argv[2])));
	else
		printf("\n");
	return (0);
}
