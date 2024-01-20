/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:39:33 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 11:26:21 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    // Test cases
    char *testStrings[] = {
        "HELLOWO   RLD",     // Only alphabetical characters
        "12\t3",            // Non-alphabetical characters
        "{|}[]()~!@#$%^^<>,./?\\-=_+*&^%$#@!~'\"",  // Mixed characters
        "",               // Empty string
        "ABCdefGHI\127"       // Upper and lower case alphabetical characters
    };

    // Number of test cases
    int numberOfTests = sizeof(testStrings) / sizeof(testStrings[0]);

    // Running the test cases
    for (int i = 0; i < numberOfTests; i++) {
        printf("Test with \"%s\": ", testStrings[i]);
		printf("%d\n", ft_str_is_printable(testStrings[i]));
    }

    return 0;
}
*/
