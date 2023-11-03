/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:43:55 by schavez           #+#    #+#             */
/*   Updated: 2023/11/02 15:23:57 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	pd = dest;
	ps = src;
	if (pd == ps || n == 0)
		return (dest);
	if (!pd && !ps)
		return (0);
	if (pd < ps)
	{
		while (n--)
			*pd++ = *ps++;
	}
	else if (pd > ps)
	{
		pd += n;
		ps += n;
		while (n--)
			*--pd = *--ps;
	}
	return (dest);
}
