/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:28:23 by aattak            #+#    #+#             */
/*   Updated: 2023/11/22 13:58:50 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/////////////////////////
#include <stdio.h> //////7ydni
/////////////////////////

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
	/////////////////////////
	printf("hada word_len %d\n", i);
	/////////////////////////
	return (i);
}

static char	*malloc_nd_fill(char const *s, char c, int *i)
{
	//int		i;
	int		len;
	char	*split;

	//i = 0;
	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	len = word_len(&s[*i], c);
	split = (char *)malloc(len + 1);
	if (split == NULL)
		return (NULL);
	ft_strlcpy(split, &s[*i], len + 1);
	return (split);
}

static void	ft_free(char **split, int i)
{
	while (i > 0)
		free(split[i--]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n_words;
	char	**split;

	n_words = ft_count_words(s, c);
	///////////////////
	printf("%d words\n",n_words); ////7ydni
	//////////////////
	split = (char **)malloc((n_words + 1) * sizeof(char *));
	printf("malloc\n");
	if (split == NULL)
		return (NULL);
	/////////////////
	printf("wa tmallocit binaja7\n"); ////7ydni
	////////////////
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		split[j] = malloc_nd_fill(s, c, &i);
		if (split[j] == NULL)
		{
			//////////////////////
			printf("lmalloc 7bess f lklma %d\n", i); ///7ydni
			/////////////////////
			ft_free(split, j - 1);
			////////////////////
			printf("sf ra drna lfree\n"); ///7ydni
			///////////////////
			return (NULL);
		}
		///////////////////////
		printf("lklma %d naaadya\n", j); ////7ydni
		printf("%s\n", split[j]); ///7ydni
		//break;  ///7ydni
		////////////////////////
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
		//////////////////
		printf("%s\n", s + i); ///7ydni
		//break; /// 7ydni
		//////////////////
	}
	split[n_words] = NULL;
	return(split);
}
