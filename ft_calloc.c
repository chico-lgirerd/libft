/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:24:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/12/12 15:17:39 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*tab;

	total_size = nmemb * size;
	tab = malloc(total_size);
	if (tab == NULL)
		return (NULL);
	tab = ft_memset(tab, 0, total_size);
	return (tab);
}
