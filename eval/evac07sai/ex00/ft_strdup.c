/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:40:01 by tanukool          #+#    #+#             */
/*   Updated: 2022/05/15 01:51:56 by psaeyang         ###   ########.fr       */
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
	int		i;
	int		slen;
	char	*to_return;

	i = 0;
	slen = ft_strlen(src);
	to_return = malloc(slen + 1 * sizeof(char));
	if (to_return == 0)
		return (0);
	while (i < slen)
	{
		to_return[i] = src[i];
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}


#include <stdio.h>
int	main(void)
{
	char	a[] = "Hello";
	char	*b;

	b = ft_strdup(a);
	printf("%s\n", b);
	free(b);
}
