/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:29:48 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/06 16:08:21 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (len == 0 || start > ft_strlen(s))
		return ("");
	sub = malloc(len * sizeof(char) + 1);
	if (sub == NULL)
		return ("");
	while (i < start + len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
int main(void)
{
	char src[] = "lorem ipsum dolor";

	char *dest = ft_substr(src, 0, 10);
	printf("%s\n", dest);
	free(dest);

	return 0;
}*/
