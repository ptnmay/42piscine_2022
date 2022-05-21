/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:42:29 by bsirikam          #+#    #+#             */
/*   Updated: 2022/05/17 17:27:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			a = 2;
		else
			a = 3;
		i++;
	}
	if (a == 2)
		return (1);
	else if (a == 3)
		return (2);
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*test;
	int	res;

	test = "";
	res = ft_str_is_uppercase(test);
	printf("%d", res);
}
