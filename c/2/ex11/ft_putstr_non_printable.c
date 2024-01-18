/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:18:08 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 06:27:52 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
			char hex[3];

	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			// Non-printable character, display as hexadecimal
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str >> 4) & 0x0F];
			hex[2] = "0123456789abcdef"[*str & 0x0F];
			write(1, hex, 3);
		}
		else
		{
			// Printable character, display as is
			write(1, str, 1);
		}
		str++;
	}
}
/*
int	main(void) {
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);

	return (0);
}//*/
