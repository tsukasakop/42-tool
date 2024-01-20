/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:47:31 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/18 00:39:38 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*locate_next_printable(char *cp)
{
	return (++cp);
}

char	*ft_strcapitalize(char *str)
{
	char	*c1;
	char	*c2;
	char	t;

	c1 = str;
	c2 = locate_next_printable(str);
	if (*c1 >= 'a' && *c1 <= 'z')
		*c1 += 'A' - 'a';
	while (*c1 && *c2)
	{
		t = *c1;
		if ((t > 47 && t < 58) || (t > 64 && t < 91) || (t > 96 && t < 123))
		{
			if (*c2 >= 'A' && *c2 <= 'Z')
				*c2 += 'a' - 'A';
		}
		else
		{
			if (*c2 >= 'a' && *c2 <= 'z')
				*c2 += 'A' - 'a';
		}
		c1 = c2;
		c2 = locate_next_printable(c2);
	}
	return (str);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    char sampleStr[] = "st, cnt tu vas ? 42mots qe-deux; cinte+et+un";

    // Call the function and display the result
    printf("Original String: %s\n", sampleStr);
    printf("Uppercase String: %s\n", ft_strcapitalize(sampleStr));

    return 0;
}
*/
