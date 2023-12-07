/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:19:26 by aattak            #+#    #+#             */
/*   Updated: 2023/12/07 20:19:29 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	i = len;
	while (i > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i--;
	}
	return (dst);
}
