/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:14:49 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/08 14:41:58 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (size <= dstl)
		return (size + srcl);
	i = 0;
	while (src[i] != '\0' && (dstl + i) < (size - 1))
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	string1[20] = "This is a ";
// 	char	*string2;
// 	size_t	size;

// 	string2 = "test 1234567890";
// 	size = ft_strlcat(string1, string2, sizeof(string1));
// 	printf("%s, %zu", string1, size);
// }
