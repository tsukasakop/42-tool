/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 04:16:43 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 04:50:30 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int 	src_len;
	unsigned int 	total_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	total_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dest_len + src_len;
	if (dest_len < size - 1)
	{
		while (src[i] != '\0' && dest_len < size - 1)
		{
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}
		dest[dest_len] = '\0';
	}
	return total_len;
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char dest[20] = "Hello";
    char src[] = ", World!";
    unsigned int size = 20;

    unsigned int result = strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}
//*/
