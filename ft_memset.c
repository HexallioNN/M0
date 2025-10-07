/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:24:10 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 14:41:52 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	char	*test;

	test = ptr;
	while (n > 0)
	{
		*test = value;
		test++;
		n--;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50] = "This is a test.";
// 	printf("\nBefore memset(): %s\n", str);

// 	ft_memset(str + 4, '.', 3);

// 	printf("After memset():  %s", str);
// 	return (0);
// }