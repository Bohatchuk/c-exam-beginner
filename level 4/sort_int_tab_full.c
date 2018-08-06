/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 17:25:31 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/25 17:25:33 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 1;
	while (i < size)
	{
		printf("%i - ", i);
		printf("%i\n", tab[i]);
		if (tab[i] < tab[i - 1])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int main(void)
{
	int t[5] = {1, -6, 17, 8, 20};
	int i;

	i = -1;
	sort_int_tab(t, 5);
	while (++i < 5)
		printf("%i\n", t[i]);
	return 0;
}