/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:18:16 by maltunda          #+#    #+#             */
/*   Updated: 2022/11/11 18:18:20 by maltunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	join(const char *s1, const char *s2, char *str)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
}

char	*ft_strjoin1(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (0);
	join(s1, s2, str);
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char *s1 = "Abdulkadir";
    char *s2 = " Yilmaz";

    printf("%s \n", ft_strjoin(s1, s2));
    return 0;
}
*/
