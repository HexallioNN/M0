/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:09:53 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/16 10:42:43 by ikalach          ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		s1_count;
	int		s2_count;

	s2_count = 0;
	s1_count = 0;
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	while (s2[s2_count] != '\0')
	{
		while (s1[s1_count] != '\0')
		{
			result[s1_count] = s1[s1_count];
			s1_count++;
		}
		result[s1_count + s2_count] = s2[s2_count];
		s2_count++;
	}
	return (result);
}

// int	main(void)
// {
// 	char *result = ft_strjoin("This is ", "a test");
// 	printf("%s", result);
// }