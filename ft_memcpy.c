/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:31:50 by schavez           #+#    #+#             */
/*   Updated: 2023/11/02 15:24:38 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p;
	const char	*s;

	p = dest;
	s = src;
	if (p == s)
		return (p);
	if (!p && !s)
		return (0);
	while (n-- > 0)
		*p++ = *s++;
	return (dest);
}
