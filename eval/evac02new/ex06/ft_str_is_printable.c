/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:50:43 by bsirikam          #+#    #+#             */
/*   Updated: 2022/05/17 17:27:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			a = 2;
		else
			a = 3;
		i++;
	}
	if (a == 2)
		return (1);
	else if (a == 3)
		return (0);
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test;
	int	res;

	test = "";
	res = ft_str_is_printable(test);
	printf("%d", res);
}*/
