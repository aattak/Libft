/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:28:23 by aattak            #+#    #+#             */
/*   Updated: 2023/12/09 15:18:59 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!(s[0]))
		return (0);
	count = 0;
	if (s[0] != c)
		count = 1;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*malloc_nd_fill(char const *s, char c, size_t *i)
{
	size_t	len;
	char	*split;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	len = word_len(&s[*i], c);
	split = (char *)malloc(len + 1);
	if (!split)
		return (NULL_P);
	ft_strlcpy(split, &s[*i], len + 1);
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	return (split);
}

static void	ft_free(char **split, size_t i)
{
	if (i == 0)
		return ;
	i--;
	while (i >= 0)
	{
		free(split[i]);
		if (i == 0)
			break ;
		i--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n_words;
	char	**split;

	if (!s)
		return (NULL_P);
	n_words = ft_count_words(s, c);
	split = (char **)malloc((n_words + 1) * sizeof(char *));
	if (!split)
		return (NULL_P);
	i = 0;
	j = 0;
	while (j < n_words)
	{
		split[j] = malloc_nd_fill(s, c, &i);
		if (!(split[j]))
		{
			ft_free(split, j);
			return (NULL_P);
		}
		j++;
	}
	split[n_words] = NULL_P;
	return (split);
}
