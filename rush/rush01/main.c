/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:00:28 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/08 16:27:37 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	result[4][4];
	int	i;
	int	j;
	int	k;
	int	m;
	int	n;

	i = 0;
	k = 0;
	while (i < 16)
	{
		m = i / 4;
		n = i % 4;
		result[m][n] = argv[1][i + k];
		k += 1; 
		i++;
	}

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_print(result[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}
