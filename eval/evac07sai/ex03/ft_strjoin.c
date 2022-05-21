/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanukool <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:32:59 by tanukool          #+#    #+#             */
/*   Updated: 2022/05/17 22:07:36 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char str[])
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_all_len(int size, char strs[][])
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < size)
		sum += ft_strlen(strs[i++]);
	return (sum);
}

char	*malloc_size(int size, char strs[][], char *sep)
{
	char	*to_return;

	to_return = 0;
	if (size < 0)
		return (0);
	else if (size == 0)
		to_return = malloc(1 * sizeof(char));
	else
		to_return = malloc((ft_all_len(size, strs) + ft_strlen(sep) * \
		(size - 1) + 1) * sizeof(char));
	if (to_return == 0)
		return (0);
	return (to_return);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i[4];
	int		k;
	char	*to_return;

	k = 0;
	to_return = 0;
	while (k < 4)
		i[k++] = 0;
	to_return = malloc_size(size, strs, sep);
	if (size < 0 || to_return == 0)
		return (0);
	while (i[0] < size)
	{
		i[1] = 0;
		i[3] = 0;
		while (strs[i[0]][i[1]])
			to_return[i[2]++] = strs[i[0]][i[1]++];
		if (i[0] != size - 1)
			while (sep[i[3]])
				to_return[i[2]++] = sep[i[3]++];
		i[0]++;
	}
	to_return[i[2]] = '\0';
	return (to_return);
}


#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	const int	size = 2;
	char	*sep = "; ";
	char	*tem[size] = {"Hi", "Hello"};
	char	*a = 0;

	a = ft_strjoin(size, tem, sep);
	printf("%s\n", a);
	free(a);
}

