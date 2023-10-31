/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:52:29 by schavez           #+#    #+#             */
/*   Updated: 2023/10/19 15:10:29 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nn;
	char	c;

	nn = n;
	if (nn < 0)
	{
		write(fd, "-", 1);
		nn = -nn;
	}
	if (nn >= 10)
	{
		ft_putnbr_fd(nn / 10, fd);
		c = nn % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = nn + '0';
		write(fd, &c, 1);
	}
}
