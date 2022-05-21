/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:43:43 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/17 18:59:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include	<stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello, It's me"));
	printf("%d\n", ft_str_is_printable("//"));
	printf("%d\n", ft_str_is_printable("©"));
	printf("%d\n", ft_str_is_printable(";"));
	printf("%d\n", ft_str_is_printable("^"));
	printf("%d\n", ft_str_is_printable(""));

}
*/
