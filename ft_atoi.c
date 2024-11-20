/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:15:03 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/20 13:14:36 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == ' ');
}

int	count_numbers(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if (n > INT_MAX)
		return (INT_MAX);
	if (n < INT_MIN)
		return (INT_MIN);
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	sign_count;

	sign_count = 0;
	minus_count = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		else if (str[i] == '+')
			sign_count++;
		i++;
	}
	if ((str[i] >= '0' && str[i] <= '9') && (sign_count + minus_count < 2))
	{
		if (minus_count == 1)
			return (-count_numbers(str + i));
		else
			return (count_numbers(str + i));
	}
	return (0);
}
