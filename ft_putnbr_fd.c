/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalach <ikalach@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:05:54 by ikalach           #+#    #+#             */
/*   Updated: 2025/10/21 13:27:26 by ikalach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	int		len;

	c = ft_itoa(n);
	if (!c)
		return ;
	len = ft_strlen(c);
	write(fd, c, len);
	free(c);
}

// int	main(void)
// {
// 	int fd;

// 	fd = open("test.txt", 1);
// 	ft_putnbr_fd(1235123, fd);
// }
