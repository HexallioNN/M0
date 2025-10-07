/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:29:40 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 17:13:04 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	int		count2;

	count = 0;
	count2 = 0;
	while (src[count2] != '\0')
	{
		count2++;
	}
	while (count < size - 1 && *src != '\0')
	{
		*dst++ = *src++;
		count++;
	}
	*dst = '\0';
	return (count2);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test[14] = "1234567";
// 	char *test2 = "12345";
// 	ft_strlcpy(test, test2, 3);
// 	printf("%s", test);
// }