/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:41:03 by apyltsov          #+#    #+#             */
/*   Updated: 2017/12/11 20:21:13 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char			*res;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	res = ((char *)malloc(sizeof(*res) * (len + 1)));
	len = 0;
	while (src[len] != '\0')
	{
		res[len] = src[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}

int		main(void)
{
	char dest[] = "tuihgbfklgjv";

	printf("%s\n", ft_strdup(dest));
	return (0);
}
