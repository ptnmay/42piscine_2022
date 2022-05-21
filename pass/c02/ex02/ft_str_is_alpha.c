/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:53:26 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 19:16:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' \
			&& str[i] <= 'Z'))
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
	char str[] = "TearsRicochet";
	char str2[] = "d13";
	char str3[] = "rainraingoaway";
	char str4[] = "DEALER LANA DEL REY";
	char str5[] = "";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	printf("%d\n", ft_str_is_alpha(str5));
	return (0);
}
*/
