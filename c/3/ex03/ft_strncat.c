/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 03:15:43 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 03:15:43 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
//*
#include <stdio.h>
int main() {
    char dest[20] = "Hello";
    char src[] = ", World!";

    ft_strncat(dest, src, 5);

    printf("Concatenated string: %s\n", dest);

    return 0;
}//*/
