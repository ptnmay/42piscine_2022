/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:16:28 by tanukool          #+#    #+#             */
/*   Updated: 2022/05/13 20:28:28 by tanukool         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
		return (0);
	i = 0;
	num = min;
	while (num < max)
		to_return[i++] = num++;
	return (to_return);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = -100;
	int	max = 101;
	int	len = max - min;
	int	*a = ft_range(min, max);
	int	i = 0;
	while (i < len)
		printf("%d\n", a[i++]);
	free(a);
}
*/
