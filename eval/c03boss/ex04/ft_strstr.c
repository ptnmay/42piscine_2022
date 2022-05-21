/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plerttra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:22:51 by plerttra          #+#    #+#             */
/*   Updated: 2022/05/19 00:08:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	count_to_find(char *to_find)
{
	int	n;

	n = 0;
	while (to_find[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = count_to_find(to_find);
	if (n == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == n)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "adadjd sf bo bro";
	char	to_find[] = "adj";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
