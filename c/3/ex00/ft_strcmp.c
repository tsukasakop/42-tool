/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 03:07:29 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 03:09:39 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hell";
    int result = ft_strcmp(str1, str2);

    printf("Comparison result: %d\n", result);

    return 0;
}//*/
