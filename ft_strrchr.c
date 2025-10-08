/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:11:22 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/08 17:32:39 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strrchr(const char *s, int c)
{
	int		length;
	char	val[100];
	char	*ptr;
	int		i;

	length = ft_strlen(s);
	i = 0;
	ptr = val;
	while (length > 0)
	{
		if (s[length] == c)
		{
			break ;
		}
		length--;
	}
	while (s[length] != '\0')
	{
		val[i] = s[length];
		i++;
		length++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char myStr[] = "Hello World";
// 	char *myPtr = ft_strrchr(myStr, 'e');
// 	if (myPtr != 0)
// 	{
// 		printf("%s", myPtr);
// 	}
// }