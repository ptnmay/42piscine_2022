/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:09:09 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 18:53:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	srclen;

	destlen = 0;
	srclen = 0;
	while (dest[destlen])
	{
		destlen++;
	}
	while (src[srclen])
	{
		dest[destlen] = src[srclen];
		destlen++;
		srclen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
/*
//need test case
int	main()
{
	char dest[50] = "Hello";
	char src[] = "World";
	
	printf("%s\n" , ft_strcat(dest,src));
	
}*/
