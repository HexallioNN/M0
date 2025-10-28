/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:44:42 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/28 15:43:06 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = dest;
	psrc = src;
	if (psrc >= pdest)
	{
		while (n > 0)
		{
			*pdest++ = *psrc++;
			n--;
		}
	}
	else if (psrc < pdest)
	{
		pdest += n - 1;
		psrc += n - 1;
		while (n > 0)
		{
			*pdest-- = *psrc--;
			n--;
		}
	}
	return (dest);
}
