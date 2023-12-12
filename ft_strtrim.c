/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:49:11 by aattak            #+#    #+#             */
/*   Updated: 2023/12/12 22:07:45 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s || !set)
		return (NULL);
	slen = ft_strlen(s1);
	start = 0;
	while (in_set(s1[start], set) && s1[start] != '\0')
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = slen - 1;
	while (in_set(s1[end], set))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, &s1[start], end - start + 2);
	return (trimmed);
}
