/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:00:21 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/09 15:50:31 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	unsigned long int	rez;
	int					sign;

	rez = 0;
	sign = 1;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == '\f' ))
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
