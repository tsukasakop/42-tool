/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:12:32 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 06:12:32 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:12:03 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 06:12:03 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:11:27 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 06:11:27 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:29:51 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/17 23:18:00 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
//	char	*(*fn)(char *, char *, unsigned int n) = ft_strncpy;
	char	*(*fn)(char *, const char *, unsigned long n) = strncpy;

	char src1[]="aiueok";
	char dst1[]="1234";
	printf("dp1 : %p\n",dst1);
	char *cp1 = fn(dst1,src1,2);
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);
	printf("cp1 : %p\n\n",cp1);

	char src2[]="aiueo";
	char dst2[10]="123456789";
	char *cp2 = fn(dst2,src2,5);
	printf("src2: %s\n", src2);
	printf("dst2: %s\n", dst2);
	printf("cp2 : %p\n\n",cp2);

	char src3[]="aiue";
	char dst3[10]="123456789";
	char *cp3 = fn(dst3,src3,4);
	printf("src3: %s\n", src3);
	printf("dst3: %s\n", dst3);
	printf("cp3  :%p\n\n",cp3);

	char src4[]="aiu";
	char dst4[10]="123456789";
	char *cp4=fn(dst4,src4,3);
	printf("src4: %s\n", src4);
	printf("dst4: %s\n", dst4);
	printf("cp4 : %p\n\n",cp4);

    return 0;
}
//*/
