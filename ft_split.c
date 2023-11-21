/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:28:23 by aattak            #+#    #+#             */
/*   Updated: 2023/11/21 16:28:58 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
}

static char	*malloc_nd_fill()
{
}

static void	ft_free()
{
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while ()
	{
		split[i] = malloc_nd_fill();
		if (split[i] == NULL)
			ft_free();
	}
	return(split);
}
