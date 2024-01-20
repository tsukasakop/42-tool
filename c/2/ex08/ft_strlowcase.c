/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:33:19 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 11:45:12 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*c;

	c = str;
	while (*c)
	{
		if (*c >= 'A' && *c <= 'Z')
			*c += 'a' - 'A';
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
    printf("Uppercase String: %s\n", ft_strlowcase(sampleStr));

    return 0;
}
*/
