/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:26:15 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/17 19:12:49 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
/*
int main(int argc,char **argv)
{
	if (argc != 2)
	{
		printf("plz type input");
		return(0);
	}
	printf("%s\n",ft_strupcase(argv[1]));
}*/
