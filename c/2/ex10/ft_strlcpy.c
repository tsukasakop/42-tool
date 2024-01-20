/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:44:08 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/18 00:50:08 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	mc;
	char			*cs;

	mc = 0;
	cs = src;
	while (*cs++)
		mc++;
	c = 0;
	while (c < size - 1 && c < mc)
	{
		dest[c] = src[c];
		c++;
	}
	if (size > 0)
		dest[c] = '\0';
	return (mc);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	unsigned int(*fn)(char *, char *, unsigned int) = ft_strlcpy;
//	unsigned long(*fn)(char *, const char *, unsigned long) = strlcpy;

	char src1[]="aiueok";
	char dst1[10]="123456789";
	unsigned int i1 = fn(dst1,src1,sizeof(src1)/sizeof(char));
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);
	printf("i1  :%d\n\n",i1);

	char src2[]="aiueo";
	char dst2[10]="123456789";
	unsigned int i2 = fn(dst2,src2,2);
	printf("src2: %s\n", src2);
	printf("dst2: %s\n", dst2);
	printf("i2  :%d\n\n",i2);

	char src3[]="aiue";
	char dst3[10]="123456789";
	unsigned int i3 = fn(dst3,src3,1);
	printf("src3: %s\n", src3);
	printf("dst3: %s\n", dst3);
	printf("i3  :%d\n\n",i3);

	char src4[]="aiu";
	char dst4[10]="123456789";
	unsigned int i4=fn(dst4,src4,0);
	printf("src4: %s\n", src4);
	printf("dst4: %s\n", dst4);
	printf("i4  :%d\n\n",i4);
}
*/
