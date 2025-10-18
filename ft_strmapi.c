/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:40:17 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/18 10:01:42 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char	test(unsigned int i, char c)
// {
// 	printf("%d %c,", i, c);
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	result = ft_calloc(len, sizeof(char) + 1);
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	printf("%s", ft_strmapi("test", test));
// }