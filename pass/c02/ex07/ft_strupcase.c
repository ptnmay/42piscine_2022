/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:58:39 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 18:59:38 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include	<stdio.h>
int	main(void)
{
	char	str[] = "i don't know";
	char	str2[] = "HI";
	char	str3[] = "cAt";
	
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	return (0);
}
*/
