/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 15:23:41 by exam              #+#    #+#             */
/*   Updated: 2017/09/22 15:53:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char n;

	n = '9';
	while (n >= '0')
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
	return (0);
}