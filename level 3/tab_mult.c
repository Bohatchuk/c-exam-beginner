/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:05:14 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/12 14:11:50 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	unsigned long int	rez;
	int sign;

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
		str ++;
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

int		main(int argc, char **argv)
{
	int i;
	int res;
	int nb;

	i = 1;
	res = 0;
	nb = ft_atoi(argv[1]);
	if (argc == 2)
	{
		if (nb == 0)
		{
			write(1, "\n",1);
			return (0);
		}
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			res = nb * i;
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else 
		write(1, "\n",1);
	return (0);
}
