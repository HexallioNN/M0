/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:18 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/16 15:20:52 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// int	len; > 0
// int	i; > 1
// int	j;  > 2
// int	substr_index; > 3
// int	start; > 4

static void	copy_substring(char *dest, const char *src, int start, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
}

static void	fill_array_5(int *int_array)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		int_array[i] = 0;
		i++;
	}
}

static int	count_substrings(char const *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

// IT IS NOT READABLE SORY
static char	**fill(char const *s, char c, int str_count, char **array)
{
	int	int_array[5];

	fill_array_5(int_array);
	while (s[int_array[1]] && int_array[3] < str_count)
	{
		if (s[int_array[1]] != c)
		{
			int_array[4] = int_array[1];
			while (s[int_array[1]] && s[int_array[1]] != c)
				int_array[1]++;
			int_array[0] = int_array[1] - int_array[4];
			array[int_array[3]] = (char *)ft_calloc(int_array[0] + 1,
					sizeof(char));
			copy_substring(array[int_array[3]], s, int_array[4], int_array[0]);
			int_array[3]++;
		}
		else
			int_array[1]++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		str_count;

	if (!s)
		return (NULL);
	str_count = count_substrings(s, c);
	array = (char **)ft_calloc(str_count + 1, sizeof(char *));
	if (!array)
		return (NULL);
	array = fill(s, c, str_count, array);
	return (array);
}

// int	main(void)
// {
// 	char **array = ft_split("apple,pear,bana", ',');
// 	int i = 0;
// 	while (array[i] != NULL)
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// }