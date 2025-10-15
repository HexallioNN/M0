/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:49:21 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/15 15:08:33 by ikalach          ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)ft_calloc(len, sizeof(char));
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
// 	char test1[14] = "This is a test";
// 	char *test2 = (char *)ft_calloc(10, sizeof(char));
// 	test2 = ft_substr(test1, 5, sizeof(test1));
// 	printf("%s", test2);
// }