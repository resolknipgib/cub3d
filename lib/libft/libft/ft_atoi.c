/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabet <fabet@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:16:29 by fabet             #+#    #+#             */
/*   Updated: 2022/11/13 20:16:31 by fabet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		||c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ctoi(char c)
{
	int	res;

	res = c - '0';
	return (res);
}

int	detect_flow(int is_minus)
{
	if (is_minus == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	long long	res;
	long long	tmp;
	int			is_minus;
	int			i;

	i = 0;
	is_minus = 1;
	while (is_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			is_minus = -1;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	res = 0;
	while (ft_isdigit(str[i]))
	{
		tmp = res * 10 + ctoi(str[i++]);
		if (tmp < res || (tmp == 0x7FFFFFFFFFFFFFFF && is_minus == 1))
			return (detect_flow(is_minus));
		res = tmp;
	}
	return ((int)(is_minus * res));
}
