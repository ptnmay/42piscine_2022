/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:27:00 by pboonpro          #+#    #+#             */
/*   Updated: 2022/05/01 18:17:05 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	mm(int i, int j, int x, int y)
{
	if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
	{
		if ((j == 0 && i == 0) || (j == x - 1 && i == y - 1 && i != 0 && j != 0))
		{
			ft_putchar('/');
		}
		else if ((j == 0 && i == y - 1) || (j == x - 1 && i == 0))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
	else
	{
		ft_putchar(' ');
	}
	return (0);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			mm(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}	
}
