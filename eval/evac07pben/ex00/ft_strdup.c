/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:47:56 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/19 18:00:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc((sizeof(char) * (ft_strlen(src)) + 1));
	if (tmp == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
	i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	main(void)
{
	char	*a = "This word can be copy.";
	char	*b;
	int	i;

	b = ft_strdup(a);
	i = 0;
	while(b[i] != '\0')
	{
		write(1, &b[i], 1);
	i++;
	}
	free(b);	
}
