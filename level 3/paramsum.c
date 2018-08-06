/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:56:13 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/12 14:04:23 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int res;

	res = 0;
	res = argc - 1;
	(void)argv;
	if (argc > 1)
	{
		ft_putnbr(res);
	}
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
