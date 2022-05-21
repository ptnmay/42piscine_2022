/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:27:38 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/12 19:26:22 by pruenrua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
int main(int argc , char **argv)
{
	if(argc != 2)
	{
		printf("plz type sth");
		return (0);
	}
	printf("%d\n",ft_str_is_numeric(argv[1]));
}*/
