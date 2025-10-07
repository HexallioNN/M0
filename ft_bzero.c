/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:03:03 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/07 14:10:24 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*test;

	test = s;
	while (n > 0)
	{
		*test = '\0';
		test++;
		n--;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[50] = "This is a test.";
// 	printf("\nBefore bzero(): %s\n", str);

// 	ft_bzero(str + 4, 3);

// 	printf("After bzero():  %s", str);
// 	return (0);
// }