/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:10:40 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/23 10:10:41 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s2;
	size_t	i;

	s2 = (char *) s;
	i = 0;
	while (s2[i] && i < n)
	{
		if (s2[i] == (unsigned char) c)
			return (&s2[i]);
		i++;
	}
	return (0);
}
