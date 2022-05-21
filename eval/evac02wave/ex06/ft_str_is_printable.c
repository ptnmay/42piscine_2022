/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:41:08 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/17 17:59:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(int argc,char **argv)
{
	if (argc != 2)
	{
		printf("plz type sth");
		return (0);
	}
	printf("%d\n",ft_str_is_printable(argv[1]));
}*/
