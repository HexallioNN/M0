/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:15:07 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/28 15:42:55 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*test;
	const unsigned char	*value;

	value = src;
	test = dest;
	while (n > 0)
	{
		*test = *value;
		value++;
		test++;
		n--;
	}
	return (dest);
}
