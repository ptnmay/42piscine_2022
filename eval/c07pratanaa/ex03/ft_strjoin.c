/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:57:29 by pratanaa          #+#    #+#             */
/*   Updated: 2022/05/19 12:57:36 by psaeyang         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_charlen(int size, char **strs, char *sep)
{
	int	i;
	int	seplen;
	int	charlen;

	i = 0;
	seplen = ft_strlen(sep);
	charlen = 0;
	while (i < size)
	{
		charlen = ft_strlen(strs[i]) + seplen;
		i++;
	}
	charlen = charlen - seplen + 1;
	return (charlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		charlen;
	int		i;

	if (size == 0)
	{
		str = (char *) malloc(sizeof(char));
		return (str);
	}
	charlen = ft_charlen(size, strs, sep);
	str = (char *) malloc(sizeof(char) * charlen);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char 	*strs[] = {"Hello", "Bangkok", "Happy", "Birthday", "Thank you"};
	char	*sep = " ";
	char	*str;
	int		size;
	
	size = 2;
	str = ft_strjoin(size, strs, sep);
	printf("-%s-\n", str);
	free(str);
	return (0);
}

