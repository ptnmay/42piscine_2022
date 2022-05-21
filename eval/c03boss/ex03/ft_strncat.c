/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerttra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:39:51 by plerttra          #+#    #+#             */
/*   Updated: 2022/05/18 13:53:05 by plerttra         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = count_str(dest);
	while (src[i] && i != nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char	dest[100] = "Tee O rose";
	char	src[] = " and First CigaretteS";

	printf("%s\n", ft_strncat(dest, src, 10));
}*/
