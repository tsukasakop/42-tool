/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:39:33 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 11:31:50 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
        "HELLOWORLD",     // Only alphabetical characters
        "123",            // Non-alphabetical characters
        "Hello123World",  // Mixed characters
        "",               // Empty string
        "ABCdefGHI"       // Upper and lower case alphabetical characters
    };

    // Number of test cases
    int numberOfTests = sizeof(testStrings) / sizeof(testStrings[0]);

    // Running the test cases
    for (int i = 0; i < numberOfTests; i++) {
	    printf("Test with \"%s\": ", testStrings[i]);
		printf("%d\n", ft_str_is_uppercase(testStrings[i]));
	}
	return (0);
}
*/
