/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:49:18 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/19 00:29:09 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char p)
{
	write (1, &p, 1);
}

void	ft_print_alphabet(void)
{
	char	p;

	p = 'a';
	while (p <= 'z')
	{
		ft_putchar(p);
		p++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	return (0);
}
*/
