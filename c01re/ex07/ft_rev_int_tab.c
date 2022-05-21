/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:29:49 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/20 07:50:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		j = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = j;
		i++;
	}
}
/*

#include	<unistd.h>
#include <stdio.h>
int	main(void)
{
	int	l[] = {1, 2, 3, 4, 5, 6, 7};
	ft_rev_int_tab(l, 7);
	int i = 0;
	while (i < 7) 
	{
		printf("%d\n", l[i++]);
	}
}
*/
