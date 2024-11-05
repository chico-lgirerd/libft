/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:14 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 21:11:43 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = 0;
	d = malloc((ft_strlen(s) * sizeof(char)) + 1);
	while (i < ft_strlen(s))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
