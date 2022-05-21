/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:31:03 by pratanaa          #+#    #+#             */
/*   Updated: 2022/05/19 12:19:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc (sizeof (int) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}

#include <stdio.h>

int	main(void)
{
	int	max;
	int	min;
	int	i;
	int	*tab;

	max = 9;
	min = -9;
	tab = ft_range(min, max);
	if (tab != NULL)
	{
		i = 0;
		while (i < (max - min))
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	else
		printf("Can't reserve storage");
	free(tab);
}

