/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 04:53:19 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 05:56:49 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int	main(void) {
	char str1[] = "Hello";
	char str2[] = "Hell";
	int result = ft_strncmp(str1, str2, 4);

	printf("Comparison result: %d\n", result);

	return (0);
}//*/
