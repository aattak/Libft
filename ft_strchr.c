/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:51:26 by aattak            #+#    #+#             */
/*   Updated: 2023/12/07 20:22:06 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	h;

	i = 0;
	h = (char)c;
	while (s[i] && s[i] != h)
		i++;
	if (s[i] == h)
		return ((char *)s + i);
	return (NULL_P);
}
