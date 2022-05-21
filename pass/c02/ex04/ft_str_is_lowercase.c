/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:12:16 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 18:57:35 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include	<stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("WATER"));
	printf("%d\n", ft_str_is_lowercase("fire"));
	printf("%d\n", ft_str_is_lowercase("2002"));
	printf("%d\n", ft_str_is_lowercase(""));

}
*/
