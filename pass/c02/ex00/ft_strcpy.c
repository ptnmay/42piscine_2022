/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:39:06 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 18:53:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include	<stdio.h>
#include	<string.h>
int	main(void)
{
	char dest[] = "red";
	char src[] = "blue";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
*/
