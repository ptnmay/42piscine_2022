/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:41:06 by pruenrua          #+#    #+#             */
/*   Updated: 2022/05/18 23:20:54 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
int main (int argc,char **argv)
{
	if(argc != 2)
	{	
		printf("plz type sth");
		return (0);
	}
	printf("%d\n",ft_str_is_lowercase(argv[1]));

}*/
