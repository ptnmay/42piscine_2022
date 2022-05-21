/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:32:25 by pboonpro          #+#    #+#             */
/*   Updated: 2022/05/19 21:55:28 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	a(char *str)
{
	if (*(str - 1) >= ' ' && *(str - 1) <= '/')
		*str -= 32;
	else if (*(str - 1) >= ':' && *(str - 1) <= '@')
		*str -= 32;
	else if (*(str - 1) >= '[' && *(str - 1) <= 96)
		*str -= 32;
	else if (*(str - 1) >= '{' && *(str - 1) <= 126)
		*str -= 32;
}

void	b(char *str)
{
	if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
		*str += 32;
	else if (*(str - 1) >= '0' && *(str - 1) <= '9')
		*str += 32;
	else if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
		*str += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			a(&str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			b(&str[i]);
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "saLut, commEnt tU vAs ? 42Mots quaRaNte-dEux; cInquAnte+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
