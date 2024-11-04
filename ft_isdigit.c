/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:09:35 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/04 13:17:27 by lgirerd          ###   ########.fr       */
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
