/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:46:04 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/09 14:30:22 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		val[100];
	char		*ptr;
	int			test;
	size_t		i;
	const char	*search;

	search = s;
	i = 0;
	test = 0;
	ptr = val;
	while (*search != '\0' && i < n)
	{
		if (*search == c || test == 1)
		{
			val[i] = *search;
			test = 1;
			i++;
		}
		search++;
	}
	return (ptr);
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