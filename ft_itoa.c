/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:37 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/18 09:47:09 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	temp_result[15];
	char	*result;
	int		i;
	int		temp;

	result = malloc(15);
	if (result == NULL)
		return (NULL);
	temp = 0;
	i = 0;
	while (n > 0)
	{
		temp = n % 10;
		n = n / 10;
		temp_result[i] = temp + '0';
		i++;
	}
	temp = 0;
	while (temp_result[temp] != '\0')
	{
		result[temp] = temp_result[i - 1];
		i--;
		temp++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(2135135));
// }