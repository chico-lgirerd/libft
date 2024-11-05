/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:14 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 19:23:04 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = 0;
	d = malloc(ft_strlen(s) * sizeof(char));
	while (i < ft_strlen(s))
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
