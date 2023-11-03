/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:54:28 by schavez           #+#    #+#             */
/*   Updated: 2023/04/12 14:13:03 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (isupper(c) || islower(c))
		return (1);
	return (0);
}
