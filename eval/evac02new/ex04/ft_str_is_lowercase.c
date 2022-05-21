/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:25:08 by bsirikam          #+#    #+#             */
/*   Updated: 2022/05/17 17:26:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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

#include <stdio.h>
int	main(void)
{
	char	*test;
	int	res;

	test = "";
	res = ft_str_is_lowercase(test);
	printf("%d", res);
}
