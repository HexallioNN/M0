/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:44:42 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 16:18:05 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

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

// #include <stdio.h>
// #include <string.h>
// #define MAX_CHAR 100

// int	main(void)
// {
// 	char first_str[MAX_CHAR] = "Hello World!";
// 	char second_str[MAX_CHAR] = "THIS IS A TEST";

// 	printf("The Actual Statements:-\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);

// 	ft_memmove(first_str, second_str, strlen(second_str));

// 	printf("After executing the function memcpy()\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// 	return (0);
// }