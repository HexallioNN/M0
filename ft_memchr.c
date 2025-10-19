/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:46:04 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/19 12:11:05 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;
	unsigned char		uc;
	size_t				i;

	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == uc)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char myStr[] = "Hello World";
// 	char *myPtr = ft_memchr(myStr, 'o', 11);
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }