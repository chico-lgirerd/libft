/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:29:53 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/20 13:48:13 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\r' || c == '\n'
		|| c == '\f' || c == '\v' || c == ' ');
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	n;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	n = 0;
	while (ft_isdigit(str[i]))
	{
		if (((n * 10 + str[i] - '0' ) / 10 != n))
			return (((LONG_MAX * (sign > 0)) + ((LONG_MIN) * (sign < 0))));
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * sign);
}
