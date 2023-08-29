/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:11:42 by maltunda          #+#    #+#             */
/*   Updated: 2022/11/11 18:11:50 by maltunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;

	if ((!dst && !src) || !n)
		return (dst);
	a = dst;
	while (n--)
	{
		*(char *)a = *(char *)src;
		a++;
		src++;
	}
	return (dst);
}

char	*ft_strdup1(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char) *(ft_strlen(s1) + 1));
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
/*
#include <stdio.h>
int main()
{
    cons char *s1 = "kadirevoyapcak";
    char *s2 = ft(strdup(s1));
}
*/
