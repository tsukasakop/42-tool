/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:33:19 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 11:42:14 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*c;

	c = str;
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c += 'A' - 'a';
		c++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    char sampleStr[] = "Hello, World!";

    // Call the function and display the result
    printf("Original String: %s\n", sampleStr);
    printf("Uppercase String: %s\n", ft_strupcase(sampleStr));

    return 0;
}
*/
