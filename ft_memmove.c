/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rockstar <rockstar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:49:50 by rockstar          #+#    #+#             */
/*   Updated: 2025/11/29 19:23:11 by rockstar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;

    if (!dest && !src)
        return (NULL);

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d > s)
    {
        while (n--)
            d[n] = s[n];
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
