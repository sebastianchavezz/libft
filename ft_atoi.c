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

int	check_overflow(unsigned long n, int new_digit, int sign)
{
	if (sign == 1)
	{
		if (n > 922337203685477580 && new_digit > 7)
			return (-1);
		if (n >= 922337203685477581)
			return (-1);
	}
	if (sign == -1)
	{
		if (n > 922337203685477580 && new_digit > 8)
			return (0);
		if (n >= 922337203685477581)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t				index;
	int					negative;
	unsigned long int	result;
	int					overflow;

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
		overflow = check_overflow(result, nptr[index] - '0', negative);
		if (overflow != 1)
			return (overflow);
		result *= 10;
		result += nptr[index] - '0';
		index++;
	}
	return (result * negative);
}
