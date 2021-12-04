/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:15:17 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/03 10:54:55 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nsize;

	nsize = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && (i + nsize - 1) < len)
	{
		if (ft_memcmp(&haystack[i], needle, nsize) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
