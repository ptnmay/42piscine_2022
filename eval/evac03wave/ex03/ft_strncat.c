/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:51:06 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 18:52:29 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destcount;
	unsigned int	srccount;

	destcount = 0;
	srccount = 0;
	while (dest[destcount])
	{
		destcount++;
	}
	while (src[srccount] && srccount < nb)
	{
		dest[destcount] = src[srccount];
		destcount++;
		srccount++;
	}
	dest[destcount] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[13] = "Hello";
	char src[] = "World1234567890123456789012345678901234567890";
	printf("%s\n",ft_strncat(dest,src,6));
	//printf("%s\n",strncat(dest,src,5));
}
*/
