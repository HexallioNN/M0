/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:15:07 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 14:43:51 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*test;
	const char	*value;

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

// #include <stdio.h>
// #include <string.h>
// #define MAX_CHAR 100

// int	main(void)
// {
// 	char first_str[MAX_CHAR] = "Hello World!";
// 	char second_str[MAX_CHAR] = "Welcome to Tutorialspoint";

// 	printf("The Actual Statements:-\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);

// 	memcpy(first_str, second_str, strlen(second_str));

// 	printf("After executing the function memcpy()\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// 	return (0);
// }