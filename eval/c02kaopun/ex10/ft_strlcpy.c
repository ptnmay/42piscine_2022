/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:12:49 by pboonpro          #+#    #+#             */
/*   Updated: 2022/05/19 21:58:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	dest[20];
	char	src[] = "meaw";
	int	x;

	x = ft_strlcpy(dest, src, 3);
	printf("%s\n%d", dest, x);
}
