/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:59:56 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/04 14:57:54 by lgirerd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
