/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:18 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/16 10:36:09 by ikalach          ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		str_count;
	int		i;
	int		j;
	int		check;

	i = 0;
	j = 0;
	str_count = 0;
	**array = malloc[3];
	array[str_count] = malloc(3);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			check = 0;
			array[str_count][j] = s[i];
			i++;
			j++;
		}
		else
		{
			if (check == 0)
			{
				str_count++;
				array[str_count] = malloc(3);
			}
			check = 1;
			i++;
			j = 0;
		}
	}
	return (array);
}

int	main(void)
{
	char **array = ft_split("apple,pear,bana", ',');
	int i = 0;
	while (array[i] != NULL)
	{
		printf("%s", array[i]);
		i++;
	}
}