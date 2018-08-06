/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 22:41:03 by apyltsov          #+#    #+#             */
/*   Updated: 2017/12/11 20:21:50 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
