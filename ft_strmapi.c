/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:15:51 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 16:29:11 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		slen;
	char	*res;

	slen = ft_strlen(s);
	res = malloc(slen * sizeof(char));
	if (res == NULL)
		return ((void *)(0));
	i = 0;
	while (i < slen)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
