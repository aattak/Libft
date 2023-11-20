/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:48:41 by aattak            #+#    #+#             */
/*   Updated: 2023/11/19 21:43:23 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	h;
	char		*str;

	i = 0;
	h = (unsigned char)c;
	str = (char *)s;
	while (i < n && str[i] != h)
		i++;
	if (str[i] == h)
		return (str + i);
	return (NULL);
}