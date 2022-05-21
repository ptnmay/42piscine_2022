/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:46:41 by bsirikam          #+#    #+#             */
/*   Updated: 2022/05/17 19:29:42 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s",ft_strstr("abcde1abcd2eabcde","abcde2"));
}*/
