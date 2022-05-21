/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:50:30 by pratanaa          #+#    #+#             */
/*   Updated: 2022/05/19 12:23:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *) malloc (sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		*range = tab;
		return (i);
	}
}

#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, 2, 9);
	printf("size = %d\n", size);
	if (range != NULL)
	{
		i = 0;
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}
	}
	else
		printf("Cannot allocate memory");
	free(range);
	return (0);
}

