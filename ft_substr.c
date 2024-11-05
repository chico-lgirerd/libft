/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:29:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 18:47:29 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
int main()
{
    char src[] = "substr function Implementation";

    char* dest = ft_substr(src, 1, 10);

    printf("%s\n", dest);
    free(dest);

    return 0;
}*/
