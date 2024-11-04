/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:19:20 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/04 13:28:21 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		if (a == i)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isalpha(int c)
{
	char	*low;
	char	*upp;
	int		i;

	low = "abcdefghijklmnopqrstuvwxyz";
	upp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (i <= 26)
	{
		if (c == low[i] || c == upp[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));	
}
