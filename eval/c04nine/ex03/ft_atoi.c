/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeerasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:41:30 by ajeerasa          #+#    #+#             */
/*   Updated: 2022/05/19 01:53:56 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>
int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (str[a] - '0') + (c * 10);
		a++;
	}
	return (c * b);
}
#include <stdlid.h>
#include <stdio.h>
int	main(void)
{
printf("atoi=%d\n", atoi("---+--+2147--+-ab567"));
	printf("%d", ft_atoi("---+--+2147--+-ab567"));
}
