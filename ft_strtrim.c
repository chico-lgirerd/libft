/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:39:47 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 15:01:08 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strstrchr(const char *s, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (set[i])
	{
		j = 0;
		while (s[i])
		{
			if (s[i] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	
	i = 0;
	j = ft_strlen(s1);
	while (
	
}
