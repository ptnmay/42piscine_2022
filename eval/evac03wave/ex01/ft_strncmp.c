/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:03:42 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 19:51:27 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{	
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include	<stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc , char **argv)
{
	if (argc != 3)
		printf("plz type again 2 str ");
	printf("OG =%d\n",strncmp(argv[1],argv[2],atoi(argv[3])));
	printf("Artificial =%d",ft_strncmp(argv[1],argv[2],atoi(argv[3])));
//	printf("%d\n",strncmp(NULL, " ",-1));
}
*/
