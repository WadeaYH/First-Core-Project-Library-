/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rockstar <rockstar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:13:18 by rockstar          #+#    #+#             */
/*   Updated: 2025/11/29 19:14:59 by rockstar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i;
    
    i = 0;
    
    if( dest == NULL && src == NULL)
        return (NULL);
    
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
