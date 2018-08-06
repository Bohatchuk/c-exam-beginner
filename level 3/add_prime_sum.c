/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 20:14:55 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/12 13:53:57 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	unsigned long int	rez;
	int	sign;

	rez = 0;
	sign = 1;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == '\f'))
		str++;
	if (*str == '-')
		sign = -1;
	if ((*str == '+' && (*++str <= 48 && *++str >= 57)) || (*str == '-' && (*++str <= 48 && *++str >= 57)))
		return (0);
	while (*str >= 48 && *str <= 57)
	{
		rez = (rez * 10 + *str * 1 - 48);
		str++;
	}
	return ((int)(rez * sign));
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
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

int		is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int num)
{
	int i;
	int res;

	i = 2;
	res = 0;
	while (i <= num)
	{
		if (is_prime(i))
			res = res + i;
		i++;
	}
	ft_putnbr(res);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(ft_atoi(argv[1]));
	}
	else
		write(1, "0", 1);
		write(1, "\n", 1);
	return (0);
}
