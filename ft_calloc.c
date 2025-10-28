/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:57:03 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/27 09:13:08 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (size != 0 && nmemb > (size_t)(INT_MAX) / size)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
