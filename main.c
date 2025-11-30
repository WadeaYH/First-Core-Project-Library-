/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rockstar <rockstar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:53:21 by wyawanse          #+#    #+#             */
/*   Updated: 2025/11/29 20:45:34 by rockstar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int main(void)
{
    // ========== TEST ft_isalpha ==========
    printf("\n--Isalpha Tests--\n");
    printf("ft_isalpha('A') = %d (expected 1)\n", ft_isalpha('A'));
    printf("ft_isalpha('z') = %d (expected 1)\n", ft_isalpha('z'));
    printf("ft_isalpha('!') = %d (expected 0)\n", ft_isalpha('!'));
    printf("ft_isalpha('5') = %d (expected 0)\n", ft_isalpha('5'));

    // ========== TEST ft_isdigit ==========
    printf("ft_isdigit('0') = %d (expected 1)\n", ft_isdigit('0'));
    printf("ft_isdigit('9') = %d (expected 1)\n", ft_isdigit('9'));
    printf("ft_isdigit('A') = %d (expected 0)\n", ft_isdigit('A'));
    printf("ft_isdigit('#') = %d (expected 0)\n", ft_isdigit('#'));

    // ========== TEST ft_isalnum ==========
    printf("\n--Isalnum Tests--\n");
    printf("ft_isalnum('A') = %d (expected 1)\n", ft_isalnum('A'));
    printf("ft_isalnum('z') = %d (expected 1)\n", ft_isalnum('z'));
    printf("ft_isalnum('5') = %d (expected 1)\n", ft_isalnum('5'));
    printf("ft_isalnum('@') = %d (expected 0)\n", ft_isalnum('@'));

    printf("\n--Isascii Tests--\n");
    printf("ft_isascii(65) = %d (expected 1)\n", ft_isascii(65));
    printf("ft_isascii(128) = %d (expected 0)\n", ft_isascii(128));
    printf("ft_isascii(1) = %d (expected 1)\n", ft_isascii(1));

    printf("\n--Isprint Tests--\n");
    printf("ft_isprint(32) = %d (expected 1)\n", ft_isprint(32));
    printf("ft_isprint(126) = %d (expected 1)\n", ft_isprint(126));
    printf("ft_isprint(31) = %d (expected 0)\n", ft_isprint(31));
    printf("ft_isprint(127) = %d (expected 0)\n", ft_isprint(127));

    printf("\n--Strlen Tests--\n");
    printf("ft_strlen(\" \") = %d (expected 1)\n", ft_strlen(" "));
    printf("ft_strlen(\"\") = %d (expected 0)\n", ft_strlen(""));
    printf("ft_strlen(\"Hello\") = %d (expected 5)\n", ft_strlen("Hello"));
    printf("ft_strlen(\"42 Core Project Library\") = %d (expected 23)\n", ft_strlen("42 Core Project Library"));

    printf("\n--Memset Tests--\n");
    char buffer[21] = "Hello World";
    ft_memset(buffer+3, 'L', 18);
    printf("Length before memset: %d (expected 11)\n", ft_strlen("Hello World"));
    printf("After memset: %s (expected 'HelloLLLLLLLLL')\n", buffer);
    printf("Length after memset: %d (expected 21)\n", ft_strlen(buffer));
    
    printf("\n--Bzero Tests--\n");
    char bzero_buffer[11] = "HelloWorld";
    printf("Before bzero: %s\n", bzero_buffer);
    ft_bzero(bzero_buffer + 9, 5);
    printf("After bzero: %s\n", bzero_buffer);
    printf("\n");


    printf("\n--Memcpy Tests--\n");
    char src[] = "SourceData";
    // char dest[10] = "Hellos";
    printf("Before memcpy, dest: '%s'\n", src);
    ft_memcpy(src+2, src, ft_strlen(src) + 1);
    printf("After memcpy, dest: '%s'\n", src);


    printf("\n--Memmove Tests--\n");
    char test[]="HelloWorld";
    printf("Before memcpy, dest: '%s'\n", test);
    ft_memmove(test+5, test, 5);
    printf("After memcpy, dest: '%s'\n", test);


    return 0;
}
