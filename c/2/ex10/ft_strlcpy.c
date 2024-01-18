/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:45:00 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 06:47:50 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
//*
#include <stdio.h>

int	main(void)
{
	char dest[10];
	const char *src = "Hello, World!";
	unsigned int size = sizeof(dest);

	unsigned int result = ft_strlcpy(dest, src, size);

	printf("Copied string: %s\n", dest);
	printf("Total length: %u\n", result);

	return (0);
} //*/
