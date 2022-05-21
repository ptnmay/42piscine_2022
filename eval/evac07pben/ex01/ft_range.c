/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:22:13 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/19 18:10:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	index;
	int	i;
	int	len;

	if (min >= max)
		return (0);
	len = max - min;
	d = (int *)malloc(sizeof(int) * len);
	if (d == 0)
		return (0);
	i = 0;
	index = min;
	while (i < len)
	{
		d[i] = index;
		index++;
		i++;
	}
	return (d);
}

int	main(void)
{
	int	*a;
	int	min;
	int	max;
	int	i;

	min = 9;
	max = 1;
	a = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", a[i]);
	i++;
	}
	free(a);
}
