/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:50:32 by pratanaa          #+#    #+#             */
/*   Updated: 2022/05/19 12:14:05 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		srclen;

	srclen = ft_strlen(src) + 1;
	str = (char *) malloc (sizeof(char) * srclen);
	i = 0;
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;

	if (argc == 2)
	{
		str1 = ft_strdup(argv[1]);
		printf("use created function ft_strdup str1 :%s:\n", str1);
		str2 = strdup(argv[1]);
		printf("use library function strdup    str2 :%s:\n", str2);
	}
	free(str1);
	free(str2);
	return (0);
}

