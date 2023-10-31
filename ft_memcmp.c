/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:23:19 by schavez           #+#    #+#             */
/*   Updated: 2023/04/12 16:44:56 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	int					result;	

	p1 = s1;
	result = 0;
	p2 = s2;
	while (n-- && result == 0)
	{
		result = (int) *p1++ - (int) *p2++;
	}
	return (result);
}
