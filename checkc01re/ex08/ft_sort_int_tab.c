/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:35:52 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/20 07:47:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				j = tab[i];
				tab[i] = tab [i + 1];
				tab [i + 1] = j;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int l[] = {9, 4, 6, 3, 5,};
	ft_sort_int_tab(l, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", l[i++]);
	}
}
*/
