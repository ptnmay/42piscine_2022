/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:34:19 by pboonpro          #+#    #+#             */
/*   Updated: 2022/05/19 20:37:25 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "mahanakorn";
	char	s2[] = "mhameaw";

	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}
