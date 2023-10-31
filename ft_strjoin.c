/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:28:40 by schavez           #+#    #+#             */
/*   Updated: 2023/10/19 14:16:29 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	size_t	chars_copied;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	new_str = (char *)malloc(total_len + 1);
	if (new_str == NULL)
		return (NULL);
	chars_copied = ft_strlcpy(new_str, s1, total_len + 1);
	ft_strlcpy(new_str + chars_copied, s2, total_len + 1 - chars_copied);
	return (new_str);
}
