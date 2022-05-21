/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerttra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:49:27 by plerttra          #+#    #+#             */
/*   Updated: 2022/05/18 13:52:37 by plerttra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	count_str(char *dest)
{
	int	n;

	n = 0;
	while (dest[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = count_str(dest);
	while (src[i])
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[100] = "First is";
	char	src[] = " blue";

	printf("%s\n", ft_strcat(dest, src));
}*/
