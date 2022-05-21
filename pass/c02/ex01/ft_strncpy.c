/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:10:13 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 18:54:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	dest[100];
	char	src[] = "rich";
	ft_strncpy(dest, src, 2);
	//strncpy(dest, src, 2);
	printf("%s\n", dest);
}
*/
