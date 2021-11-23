/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:11:26 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/23 10:11:28 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				y;
	unsigned char	*b2;

	b2 = b;
	y = 0;
	while (len > 0)
	{
		b2[y] = (unsigned char) c;
		len--;
		y++;
	}
	return (b);
}
