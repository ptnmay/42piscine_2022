/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:52:19 by tanukool          #+#    #+#             */
/*   Updated: 2022/05/13 22:23:39 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	len;
	int				*to_return;
	int				i;
	int				num;

	if (min >= max)
		return (0);
	len = max - min;
	to_return = malloc(len * sizeof(int));
	if (to_return == 0)
		return (-1);
	i = 0;
	num = min;
	while (num < max)
		to_return[i++] = num++;
	*range = to_return;
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	len;
	int	i;

	min = -100;
	max = 101;
	len = max - min;
	i = 0;
	ft_ultimate_range(&range, min, max);
	while (i < len)
		printf("%d ", range[i++]);
	free(range);
}
*/
