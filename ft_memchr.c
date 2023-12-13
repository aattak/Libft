/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:48:41 by aattak            #+#    #+#             */
/*   Updated: 2023/12/09 10:52:45 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	h;
	unsigned char	*str;

	i = 0;
	h = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n && str[i] != h)
		i++;
	if (str[i] == h && i < n)
		return ((void *)str + i);
	return (NULL_P);
}
