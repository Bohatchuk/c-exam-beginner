/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 18:18:54 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/03 18:18:56 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_hex(int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar((nb % 16) + 48);
	else
		ft_putchar((nb % 16) - 10 + 97); 
}

int		ft_atoi_printhex(char *str)
{
	int i;
	int res;

	i = 0;
	while (str[i] != '\0' && (str[i] <= 32))
		i++;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+')
		i++;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int nb;

	if (argc == 2)
	{
		if ((nb = ft_atoi_printhex(argv[1])) != -1)
			print_hex(nb);
	}
	ft_putchar('\n');
	return (0);
}
