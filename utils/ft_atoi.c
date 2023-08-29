/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:16:58 by maltunda          #+#    #+#             */
/*   Updated: 2022/11/11 18:17:01 by maltunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(long long int n)
{
	if (n < -2147483648)
		return (0);
	if (n > 2147483647)
		return (-1);
	return ((int)n);
}

int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	s;
	long long int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0') * s;
		i++;
	}
	return (check(res));
}
/*
int main()
{
    const char *d = "-12321321";
    printf("%d",ft_atoi(d));

}*/
