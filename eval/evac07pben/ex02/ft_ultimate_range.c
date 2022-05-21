/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:19:59 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/19 18:40:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*point;
	int	*tmp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	point = ((int *)malloc(sizeof(int) * len));
	tmp = point;
	if (tmp == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = point;
	i = -1;
	while (i++ < len)
		point[i] = min + i;
	return (len);
}

int	main(void)
{
	int	min;
	int	max;
	int	*st;
	int	size;
	int	i;

	i = 0;
	min = -15;
	max = 20;
	size = ft_ultimate_range(&st, min, max);
	while (i < size)
	{
		printf("%d, ", st[i]);
		i++;
	}
	printf("return size = %d",size);
	free(st);
}
