/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:54:15 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 16:13:27 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num_str(unsigned char *addr, int len)
{
	char	c;
	int		i;

	i = 0;
	while (i < len)
	{
		c = addr[i];
		if (c < ' ' || c > '~')
			c = '.';
		write(1, &c, 1);
		i++;
	}
}

void	print_num_hex(unsigned char *addr, int len)
{
	char	lhs;
	char	rhs;
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < len)
		{
			lhs = '0' + addr[i] / 16;
			rhs = '0' + addr[i] % 16;
			if (lhs > '9')
				lhs += 'a' - '9' - 1;
			if (rhs > '9')
				rhs += 'a' - '9' - 1;
			write(1, &lhs, 1);
			write(1, &rhs, 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_addr(unsigned long addr)
{
	int		i;
	char	o[16];

	i = 0;
	while (i < 16)
	{
		o[15 - i] = addr % 16 + '0';
		if (o[15 - i] > '9')
			o[15 - i] += 'a' - '9' - 1;
		i++;
		addr /= 16;
	}
	write(1, o, 16);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*current;
	unsigned int	i;
	unsigned int	offset;

	current = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_addr((unsigned long)current + i);
		offset = 16;
		if (size - i < 16)
			offset = size - i;
		print_num_hex(current + i, offset);
		print_num_str(current + i, offset);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int main(){
	char s [20]="1234567890qwertyuiop";
	ft_print_memory(s,50);
}
*/
