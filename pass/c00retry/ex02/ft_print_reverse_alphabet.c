/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:47:55 by psaeyang          #+#    #+#             */
/*   Updated: 2022/05/18 23:12:06 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char r)
{
	write (1, &r, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 'z';
	while (r >= 'a')
	{
		ft_putchar(r);
		r--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write (1,"\n", 1);
	return(0);
}
*/
