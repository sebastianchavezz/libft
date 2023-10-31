/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:24:09 by schavez           #+#    #+#             */
/*   Updated: 2023/10/19 15:08:05 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	char	*str;
	int		l;
	int		i;

	ss = (char *)s;
	if (ss)
	{
		l = ft_strlen(ss);
		str = (char *)malloc(sizeof(char) * (l + 1));
		if (str == 0)
			return (0);
		i = 0;
		while (i < l)
		{
			str[i] = f(i, ss[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
