/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:56:59 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/15 14:45:30 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	char	target[120];
	char	*ptr;
	int		i;

	i = 0;
	ptr = target;
	while (s[i] != '\0')
	{
		target[i] = s[i];
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char source[] = "This is a test";

// 	char *target = ft_strdup(source);

// 	printf("%s", target);
// 	return (0);
// }