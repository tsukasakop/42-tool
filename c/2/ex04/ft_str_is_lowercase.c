/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:39:33 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 11:05:32 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
        "helloworld",     // Only alphabetical characters
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
		printf("%d\n", ft_str_is_lowercase(testStrings[i]));
    }

    return 0;
}
*/
