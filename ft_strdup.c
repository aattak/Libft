/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:49:00 by aattak            #+#    #+#             */
/*   Updated: 2023/11/06 17:52:04 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <errno.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
