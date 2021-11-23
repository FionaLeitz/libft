/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:16:14 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/23 10:16:15 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s1);
	i = len - 1;
	while (ft_strchr(set, s1[i]) != 0)
		i--;
	len = len - (len - i);
	i = 0;
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	len = len - i + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	return (ft_memcpy(str, &s1[i], (len)));
}
