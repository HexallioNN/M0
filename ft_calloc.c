/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:57:03 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/13 11:39:23 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int n = 5;
// 	int *array;

// 	// use calloc function to allocate the memory
// 	array = (int *)calloc(n, sizeof(int));

// 	if (array == NULL)
// 	{
// 		fprintf(stderr, "Memory allocation failed!\n");
// 		return (1);
// 	}

// 	// Display the array value
// 	printf("Array elements after calloc: ");
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	printf("\n");

// 	// free the allocated memory
// 	free(array);
// 	return (0);
// }