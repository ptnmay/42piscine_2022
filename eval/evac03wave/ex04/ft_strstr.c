/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:57:11 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 19:57:14 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlenn(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{	
			j = 0;
			while (to_find[j] && str[i + j] == to_find[j])
			{
				if (j + 1 == strlenn(to_find))
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	printf("%s\n",strstr("TuterppointPolo" , "Po"));
	printf("%s\n",ft_strstr("TuterppointPolo" , "Po"));
}*/
