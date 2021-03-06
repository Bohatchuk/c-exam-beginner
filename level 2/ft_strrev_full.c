/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:51:49 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:19:39 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	tmp;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l++;
	while (l - 1 > i)
	{
		tmp = str[i];
		str[i] = str[l - 1];
		str[l - 1] = tmp;
		l--;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "hello";

	printf("%s\n", ft_strrev(str));
	return (0);
}
