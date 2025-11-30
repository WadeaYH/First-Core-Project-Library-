/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rockstar <rockstar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:27:20 by rockstar          #+#    #+#             */
/*   Updated: 2025/11/29 19:15:13 by rockstar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;
    unsigned char   value;
    size_t          i;

    ptr = b;
    value = (unsigned char)c;
    i = 0;
    
    while (i < len)
    {
        ptr[i] = value;
        i++;
    }
    
    return (b);
}