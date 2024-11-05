/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:36:59 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 19:20:08 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap(char *a, char *b)
{
	char	t;

	t = *a;
	*a = *b;
	*b = t;
}

char	*reverse(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		i;
	int		sign;

	res = malloc(sizeof(char) * 12);
	i = 0;
	sign = 0;
	if (res == NULL)
		return (NULL);
	if (nb == -2147483648)
		return ("-2147483648");
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	while (nb)
	{
		res[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (sign)
		res[i] = '-';
	return (reverse(res));
}
