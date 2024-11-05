/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:39:47 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 16:32:16 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strstrchr(const char *set, const char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		resi;

	i = 0;
	j = 0;
	resi = 0;
	while (ft_strstrchr(set, s1[i]))
		i++;
	while (!(ft_strstrchr(set, s1[i])))
	{
		j++;
		i++;
	}
	i -= j;
	res = malloc(j * sizeof(char));
	while (!(ft_strstrchr(set, s1[i])))
	{
		res[resi] = s1[i];
		resi++;
		i++;
	}
	return (res);
}

/*
int	main()
{
	char	*test = ft_strtrim("filsiiicoucoulisf", "fils");
	printf("%s", test);
	return (0);
}*/
