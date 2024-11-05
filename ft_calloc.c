/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:24:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 13:58:40 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		total_size;
	int		*tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return ((void *)(0));
	total_size = size * nmemb;
	if (total_size / size != nmemb)
		return ((void *)(0));
	tab = malloc(total_size * sizeof(int));
	if (tab == NULL)
		return ((void *)(0));
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}
