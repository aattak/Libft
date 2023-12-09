/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:08:13 by aattak            #+#    #+#             */
/*   Updated: 2023/12/08 09:45:21 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	h;

	i = 0;
	j = -1;
	h = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == h)
			j = i;
		i++;
	}
	if (h == '\0')
		return ((char *)s + i);
	if (j == -1)
		return (NULL);
	return ((char *)s + j);
}
