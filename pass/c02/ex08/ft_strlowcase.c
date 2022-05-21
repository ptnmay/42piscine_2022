/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:20:46 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 19:00:00 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include	<stdio.h>
int	main(void)
{
	char str[] = "Welcome To Facebook";
	char str2[] = "BYE";
	
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str2));
}
*/
