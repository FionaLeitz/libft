/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:15:17 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/24 17:11:34 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 1;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && (i + 2) < len)
	{
		if (ft_memcmp(&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
