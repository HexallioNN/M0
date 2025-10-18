/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:05:54 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/18 11:09:20 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd;

// 	fd = open("test.txt", 1);
// 	ft_putnbr_fd(3, fd);
// }