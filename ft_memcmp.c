/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:32:38 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/09 14:41:29 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *source, const void *compare, size_t n)
{
	const char	*s1;
	const char	*s2;
	int			i;
	int			size;

	s1 = source;
	s2 = compare;
	size = n;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i == size)
			return (0);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *test1 = "tte2st";
// 	char *test2 = "tt3est";
// 	int result;

// 	result = ft_memcmp(test1, test2, 3);
// 	printf("%d", result);
// }