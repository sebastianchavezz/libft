/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:56:05 by schavez           #+#    #+#             */
/*   Updated: 2023/10/27 16:18:14 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	char	*dp;
	int		i;

	s1 = (char *)s;
	dp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dp == 0)
		return (0);
	if (!s1)
	{
		*dp = '\0';
		return (dp);
	}
	i = 0;
	while (*s1)
	{
		dp[i] = *s1;
		s1++;
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
