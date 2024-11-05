/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:55:13 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 18:45:10 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	while (i < n && csrc[i])
	{
		cdest[i] = csrc[i];
		i++;
	}
	cdest[i] = '\0';
	return (dest);
}
