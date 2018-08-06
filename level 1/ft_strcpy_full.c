/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 20:20:35 by exam              #+#    #+#             */
/*   Updated: 2017/10/09 20:55:54 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++; 
	}
	s1[i] = '\0';
	return (s1);
}

int		main()
{
	char s1[] = "1111111111111111";
	char s2[] = "qweryyturtyhetyj";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	return (0);
}
