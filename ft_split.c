/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirerd <lgirerd@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:22:16 by lgirerd           #+#    #+#             */
/*   Updated: 2024/11/05 15:29:15 by lgirerd          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int strchr(const char *s, char c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

char    **ft_split(char const *s, char c)
{

}