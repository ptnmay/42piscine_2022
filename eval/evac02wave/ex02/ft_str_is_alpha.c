/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:32:31 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/12 19:26:45 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (i);
}
/*
int main(int argc , char **argv)
{
	if(argc != 2)
	{
		printf("Plz type something");
		return (0);
	}
	printf("%d\n",ft_str_is_alpha(argv[1])) ;
}*/
