/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 18:34:21 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:00:23 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base(const char c)
{
	int nb;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else nb = -1;
	return (nb);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int sign;
	int res;
	int current;

	while (*str != '\0' && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	current = ft_base(*str);
	while (current >= 0 && current < str_base)
	{
		res = res * str_base + current;
		str++;
		current = ft_base(*str);
	}
	return (res * sign);
}
