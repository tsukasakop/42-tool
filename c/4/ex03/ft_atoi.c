/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:14:24 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 09:55:58 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i]) >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
//*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}

	int num = ft_atoi("     ----+-+--094159");
	printf("Converted integer: %d\n", num);

	return (0);
} //*/
