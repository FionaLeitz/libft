/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:16:22 by fleitz            #+#    #+#             */
/*   Updated: 2021/12/04 11:26:49 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if (start >= size)
	{
		str = malloc(sizeof(char) * len);
		if (str == NULL)
			return (0);
		ft_bzero(str, len);
		return (str);
	}
	if (len > size)
		str = malloc(sizeof(char) * size + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
