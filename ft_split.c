/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:36:04 by schavez           #+#    #+#             */
/*   Updated: 2023/10/19 15:13:37 by schavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free_split(char **split, size_t i)
{
	while (i)
	{
		free(split[--i]);
	}
	free(split);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_extract_word(const char *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_fill_split(const char *s, char c, char **result)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = ft_extract_word(s, c);
			if (!result[i])
			{
				ft_free_split(result, i);
				return (NULL);
			}
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	result[i] = (NULL);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	word_count = ft_wordcount(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	ft_fill_split(s, c, result);
	return (result);
}
