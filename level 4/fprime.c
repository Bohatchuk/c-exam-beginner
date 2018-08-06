/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 17:10:07 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/25 17:10:09 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int num)
{
	int	div;

	div = 2;
	if (num == 1)
		printf("1\n");
	if (num < 1)
		return ;
	while (div <= num)
	{
		if (num % div == 0)
		{
			printf("%d", div);
			if (num == div)
				return ;
			printf("*");
			num = num / div;
			div = 1;
		}
		div++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
