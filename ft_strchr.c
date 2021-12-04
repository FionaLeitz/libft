/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:12:53 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/30 15:42:11 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	y;
	size_t	cmp;

	cmp = ft_strlen(s) + 1;
	y = 0;
	while (y < cmp)
	{
		if (s[y] == (char) c)
			return ((char *) &s[y]);
		y++;
	}
	return (0);
}
