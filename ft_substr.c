/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:29:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 13:39:09 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (len == 0 || start > ft_strlen(s))
		return ((void *)(0));
	sub = malloc(len * sizeof(char));
	if (sub == NULL)
		return ((void *)(0));
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
