/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:28:23 by aattak            #+#    #+#             */
/*   Updated: 2023/11/22 20:32:20 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	if (s[0] == '\0')
		return (0);
	count = 0;
	if (s[0] != c)
		count = 1;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*malloc_nd_fill(char const *s, char c, int *i)
{
	int		len;
	char	*split;

	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	len = word_len(&s[*i], c);
	split = (char *)malloc(len + 1);
	if (split == NULL)
		return (NULL);
	ft_strlcpy(split, &s[*i], len + 1);
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	return (split);
}

static void	ft_free(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n_words;
	char	**split;

	if (s == NULL)
		return (NULL);
	n_words = ft_count_words(s, c);
	split = (char **)malloc((n_words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		split[j] = malloc_nd_fill(s, c, &i);
		if (split[j] == NULL)
		{
			ft_free(split, j - 1);
			return (NULL);
		}
		j++;
	}
	split[n_words] = NULL;
	return (split);
}
