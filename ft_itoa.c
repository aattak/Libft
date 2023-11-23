/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:24:15 by aattak            #+#    #+#             */
/*   Updated: 2023/11/23 14:17:49 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ilen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len = 1;
	}
	while(n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_fill(char *str, size_t len, int n)
{
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648");
	len = ilen(n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';


	return (str);
}
