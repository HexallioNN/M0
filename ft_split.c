/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:18 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/16 11:15:55 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	char	*test;

	test = s;
	while (n > 0)
	{
		*test = '\0';
		test++;
		n--;
	}
}

static char	*strcpy(char *s, char *r, int j, int len)
{
	while (j < len)
	{
		r[j] = s[start + j];
		j++;
	}
}

static void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, nmemb * size);
	return (pointer);
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

static char	**fill(char const *s, char c, int str_count, char **array)
{
	int	len;
	int	i;
	int	j;
	int	substr_index;
	int	start;

	substr_index = 0;
	j = 0;
	i = 0;
	while (s[i] && substr_index < str_count)
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			array[substr_index] = (char *)ft_calloc(len + 1, sizeof(char));
			while (j < len)
			{
				array[substr_index][j] = s[start + j];
				j++;
			}
			array[substr_index][j] = '\0';
			substr_index++;
		}
		else
			i++;
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
// 	char **array = ft_split("apple,pear,,;,,bana", ',');
// 	int i = 0;
// 	while (array[i] != NULL)
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// }