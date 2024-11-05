/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:40 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 18:46:58 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return (str);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j])
		{
			if (little[j + 1] == '\0')
				return (big + i);
			j++;
		}
		i++;
	}
	return ((void *)(0));
}
