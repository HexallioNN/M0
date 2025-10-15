/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:49:21 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/15 15:19:14 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = malloc(3);
	i = 0;
	if (substr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	return (substr);
}

// int	main(void)
// {
// 	char test1[33] = "This is a test and its a long one";
// 	char *test2 = malloc(3);
// 	test2 = ft_substr(test1, 7, 17);
// 	printf("%s", test2);
// 	free(test2);
// }