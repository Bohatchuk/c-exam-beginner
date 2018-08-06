/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:00:21 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/11 14:47:39 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int		ft_atoi(const char *str)
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

int		main()
{
	char dest[] = "   123547764";
	printf("%d\n", ft_atoi(dest));
	printf("%d", atoi(dest));
	return (0);
}
