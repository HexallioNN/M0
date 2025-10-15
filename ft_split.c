/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:18 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/15 17:28:59 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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
	char **array = ft_split("one;;two;three", ';');
	int i = 0;
	while (array[i] != NULL)
	{
		printf("%s", array[i]);
		i++;
	}
}