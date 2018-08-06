/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 18:04:16 by exam              #+#    #+#             */
/*   Updated: 2017/09/29 19:14:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	odd;
	char	even;
	int		i;

	even = 'z';
	odd = 'Y';
	i = 13;
	while (i <= 13 && i >= 0)
	{
		if (even <= 'z' && even >= 'b')
			write (1, &even, 1);
		if (odd <= 'Y' && odd >= 'A')
			write (1, &odd, 1);
		even = even - 2;
		odd = odd - 2;
		i--;
	}
	write (1, "\n", 1);
	return (0);
}