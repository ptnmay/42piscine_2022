/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:48:32 by bsirikam          #+#    #+#             */
/*   Updated: 2022/05/17 17:25:26 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z'))
			|| ((str[i] >= 'a') && (str[i] <= 'z')))
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
	res = ft_str_is_alpha(test);
	printf("%d", res);
}
