/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 18:15:12 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/02 19:41:59 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char m)
{
	write (1, &m, 1);
}

void	ft_print_numbers(void)

{
	char	m;

	m = '0';
	while (m <= '9')
	{
		ft_putchar(m);
		m++;
	}
}
/*
int	main(void)

{
	ft_print_numbers();
	write (1, "\n", 1);
	return(0);
}
*/
