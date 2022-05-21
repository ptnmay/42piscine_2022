/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:58:46 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 18:53:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(int argc ,char **argv)
{
	if(argc != 3)
	{
		printf("Plz type 2 str to compare");
	}
	printf("OG = %d\n", strcmp(argv[1],argv[2]));

	printf("Artificial = %d", ft_strcmp(argv[1], argv[2]));
}*/
