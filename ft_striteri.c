/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:03:17 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/18 10:31:49 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	testf(unsigned int i, char *c)
// {
// 	printf("%d %s,", i, c);
// }

// int	main(void)
// {
// 	char test[14] = "This is a test";
// 	ft_striteri(test, testf);
// 	printf("%s", test);
// }