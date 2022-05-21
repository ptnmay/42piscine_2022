/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:46:39 by pboonpro          #+#    #+#             */
/*   Updated: 2022/05/19 20:34:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "hell";
	char	s2[] = "hello";
	int	i;

	i = ft_strcmp(s1, s2);
	printf("%d", i);
	return (0);
}
