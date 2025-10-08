/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:42:29 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/08 17:44:32 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	size;

	size = n;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == size)
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *test1 = "te2st";
// 	char *test2 = "te2st";
// 	int result;

// 	result = ft_strncmp(test1, test2, 3);
// 	printf("%d", result);
// }