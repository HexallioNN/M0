/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:14:49 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 17:20:29 by ikalach          ###   ########.fr       */
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

size_t		strlcat(char *dst, const char *src, size_t size);
{
	int dstl;
	int srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);

	return (dstl + srcl);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char test[14] = "1234567";
// 	char *test2 = "12345";
// 	ft_strlcat(test, test2, 14);
// 	printf("%s", test);
// }