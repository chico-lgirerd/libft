/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:52:17 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/04 13:08:49 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
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
