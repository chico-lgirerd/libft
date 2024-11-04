/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:40:37 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/04 17:47:20 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cs1;
	char	*cs2;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (cs1[i] == cs2[i] && i < n)
	{
		i++;
	}
	return (cs1[i] - cs2[i]);
}
