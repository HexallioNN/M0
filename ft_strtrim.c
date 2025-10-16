/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:45:33 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/16 10:33:43 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

static int	finder(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	result = malloc(end + 2);
	if (result == NULL)
		return (NULL);
	while (finder(s1[start], set))
		start++;
	while (finder(s1[end], set))
		end--;
	while (start <= end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	char *test = ft_strtrim("ababaaaMy name is Ilterbbaaabba", "ab");
// 	printf("%s", test);
// }