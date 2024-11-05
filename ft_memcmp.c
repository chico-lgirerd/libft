/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:40:37 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 18:44:52 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
