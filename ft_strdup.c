/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:14 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 12:20:25 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stflib.h>
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

char	*strdup(const char *s)
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
