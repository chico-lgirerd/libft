/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:36:59 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/08 17:19:58 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
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
	int		len;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(nb);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	sign = (nb < 0);
	if (nb == 0)
		res[i++] = '0';
	if (sign)
		nb = -nb;
	while (nb)
	{
		res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign)
		res[i++] = '-';
	res[i] = '\0';
	return (reverse(res));
}
