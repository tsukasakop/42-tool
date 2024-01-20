/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 04:23:13 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 23:00:35 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
//	char	*(*fn)(char *, char *) = ft_strcpy;
//	char	*(*fn)(char *, const char *) = strcpy;

	char src1[]="aiueok";
	char dst1[]="1234";
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);
	char *cp1 = ft_strcpy(dst1,src1);
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);
	printf("cp1 : %p\n\n",cp1);

	char src2[]="aiueo";
	char dst2[10]="123456789";
	char *cp2 = ft_strcpy(dst2,src2);
	printf("src2: %s\n", src2);
	printf("dst2: %s\n", dst2);
	printf("cp2 : %p\n\n",cp2);

	char src3[]="aiue";
	char dst3[10]="123456789";
	char *cp3 = ft_strcpy(dst3,src3);
	printf("src3: %s\n", src3);
	printf("dst3: %s\n", dst3);
	printf("cp3  :%p\n\n",cp3);

	char src4[]="aiu";
	char dst4[10]="123456789";
	char *cp4=ft_strcpy(dst4,src4);
	printf("src4: %s\n", src4);
	printf("dst4: %s\n", dst4);
	printf("cp4 : %p\n\n",cp4);

    return 0;
}
*/
