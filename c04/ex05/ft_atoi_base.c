/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harpark <harpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 23:29:10 by harpark           #+#    #+#             */
/*   Updated: 2021/03/18 14:52:34 by harpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		g_base_l;

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	if (!(*base))
		return (0);
	i = 0;
	while (base[i])
	{
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		if (g_base_l == 1)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		get_index(char c, char *base)
{
	int		i;

	i = 0;
	while (i < g_base_l)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		check_whitespace_minus(char str)
{
	if (str == ' ' || str == '+' ||
	str == '\t' || str == '\r' || str == '\f' ||
	str == '\n' || str == '\v')
		return (1);
	else if (str == '-')
		return (-1);
	else
		return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		result;
	int		i;

	g_base_l = ft_strlen(base);
	if (!check_base(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while (check_whitespace_minus(str[i]))
	{
		sign *= check_whitespace_minus(str[i]);
		i++;
	}
	while (get_index(str[i], base) != -1)
	{
		result *= g_base_l;
		result += get_index(str[i], base);
		i++;
	}
	return (sign * result);
}
