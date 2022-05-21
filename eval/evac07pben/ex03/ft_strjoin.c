/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:29:51 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/19 18:39:33 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_len(char **str, int size, int sep_len)
{
	int	t_len;
	int	i;

	t_len = 0;
	i = 0;
	while (i < size)
	{
		t_len += ft_len(str[i]);
		t_len += sep_len;
		i++;
	}
	t_len -= sep_len;
	return (t_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sum_len;
	int		i;
	char	*st;
	char	*tmp;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	sum_len = ft_total_len(strs, size, ft_len(sep));
	st = (char *)malloc(sizeof(char) * (sum_len + 1));
	tmp = st;
	if (tmp == 0)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(tmp, strs[i]);
		tmp += ft_len(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(tmp, sep);
			tmp += ft_len(sep);
		}
	}
	tmp[i] = '\0';
	return (st);
}

int	main()
{
	char	*sep;
	char	*ans;
	int	size;

	size = 1;
	char	*strs[] = {"aasdfgh","12345","xyz","ddd","qwer"};
	sep = ",,,,,";
	ans = ft_strjoin(size, strs, sep);
	printf("%s \n", ans);
	free(ans);
}
