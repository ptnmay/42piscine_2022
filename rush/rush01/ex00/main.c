/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:00:28 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/08 18:18:31 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_first_line(char *argv)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		ft_print(argv[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_second_line(char *argv)
{
	int	i;

	i = 8;
	while (i <= 14)
	{
		ft_print(argv[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_third_line(char *argv)
{
	int	i;

	i = 16;
	while (i <= 22)
	{
		ft_print(argv[i]);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_four_line(char *argv)
{
	int	i;

	i = 24;
	while (i <= 30)
	{
		ft_print(argv[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_first_line(argv[1]);
	ft_second_line(argv[1]);
	ft_third_line(argv[1]);
	ft_four_line(argv[1]);
	return (0);
}
