/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:28:14 by schavez           #+#    #+#             */
/*   Updated: 2023/10/27 16:16:08 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_space(char c)
{
	if (c == '\n')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t				index;
	int					negative;
	unsigned long int	result;

	index = 0;
	negative = 1;
	result = 0;
	while (is_space(nptr[index]))
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
		if (nptr[index++] == '-')
			negative *= -1;
	while (ft_isdigit(nptr[index]))
	{
		result *= 10;
		result += nptr[index] - '0';
		index++;
	}
	return (result * negative);
}
