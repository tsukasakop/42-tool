/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 03:43:35 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 04:17:13 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (char *)str;
	while (*str != '\0')
	{ 
		char	*s1;
		char	*s2;
		
		s1 = str;
		s2 = to_find;
		while (*s1 == *s2 && *s1 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char to_find[] = "Wqorld";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}//*/
