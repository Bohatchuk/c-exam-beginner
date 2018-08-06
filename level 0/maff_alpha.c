/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:00:53 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/05 17:18:34 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	even;
	char	odd;
	int		i;

	odd = 'a';
	even = 'B';
	i = 0;
	while (i >= 0 & i <= 13)
	{
		if (odd >= 'a' && odd <= 'y')
			write (1, &odd, 1);
		if (even >= 'B' && even <= 'Z')
			write (1, &even, 1);
		odd = odd + 2;
		even = even + 2;
		i++;
	}
	write (1, "\n", 1);
	return (0);
}