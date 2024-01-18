/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 08:49:00 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 08:52:07 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
//*
#include <stdio.h>

int	main(void)
{
	char *str = "Hello, world!";
	int length = ft_strlen(str);
	printf("Length of the string: %d\n", length);
	return (0);
} //*/
