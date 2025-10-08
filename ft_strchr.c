/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:52:19 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/08 17:09:19 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	val[100];
	char	*ptr;
	int		test;
	int		i;

	i = 0;
	test = 0;
	ptr = val;
	while (*s != '\0')
	{
		if (*s == c || test == 1)
		{
			val[i] = *s;
			test = 1;
			i++;
		}
		s++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char myStr[] = "Hello World";
// 	char *myPtr = ft_strchr(myStr, '\0');
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }