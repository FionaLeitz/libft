/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:10:06 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/23 10:10:24 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_recursive(unsigned int n, char *result)
{
	int				i;
	unsigned int	n2;

	i = 0;
	n2 = n;
	n = n / 10;
	if (n > 0)
		(ft_recursive(n, result));
	while (result[i])
		i++;
	result[i] = (n2 % 10) + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				i;
	unsigned int	n2;

	result = malloc(sizeof(char) * 12);
	if (result == NULL)
		return (0);
	ft_memset(result, '\0', 12);
	i = 0;
	n2 = n;
	if (n < 0)
	{
		result[0] = '-';
		n2 = -n;
		i++;
	}
	return (ft_recursive(n2, result));
}
