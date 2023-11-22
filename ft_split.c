/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:28:23 by aattak            #+#    #+#             */
/*   Updated: 2023/11/22 07:00:19 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	l;

	i = 0;
	if (s[i] == '\0')
		return (0);
	l = 0;
	if (s[i] != c)
		l++;
	i++;
	while (s[i] != '\0')
	{
	}
	return (l);
}

static int	word_len()
{
}

static char	*malloc_nd_fill(char *s)
{
	char	*split;
	return (split);
}

static void	ft_free(char **split, int i)
{
	while (i > 0)
		free(split[i]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**split;

	n_words = ft_count_words(s, c);
	split = (char **)malloc((n_words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i < n_words)
	{
		split[i] = malloc_nd_fill();
		if (split[i] == NULL)
			ft_free(split, i - 1);
	}
	return(split);
}
