/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:28:07 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 13:38:08 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int		i;
	size_t	size;

	i = 0;
	while (str[i])
		i++;
	size = sizeof(char) * i;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = 0;
	d_len = ft_strlen(dst);
	j = ft_strlen(dst);
	if (size < d_len)
		return (size + ft_strlen(src));
	while (src && s_len < (size - d_len - 1))
	{
		dst[j] = src[s_len];
		j++;
		s_len++;
	}
	dst[j] = '\0';
	return (d_len + ft_strlen(src));
}
