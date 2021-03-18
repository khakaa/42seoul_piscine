/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:14:01 by harpark           #+#    #+#             */
/*   Updated: 2021/03/18 10:30:37 by harpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		check_base(char *base);
int		get_index(char c, char *base);
int		ft_atoi_base_from(char *nbr, char *base);

char	*display(char *buf)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof(char) * ft_strlen(buf) + 1);
	if (!result)
		return (0);
	i = 0;
	while (buf[i])
	{
		result[i] = buf[ft_strlen(buf) - i - 1];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa_base_to(int number, char *base)
{
	long long		temp;
	char			buf[42];
	int				i;
	int				sign;

	temp = number;
	sign = 1;
	if (temp < 0)
	{
		temp *= -1;
		sign *= -1;
	}
	i = 0;
	while (1)
	{
		buf[i++] = base[temp % ft_strlen(base)];
		temp = temp / ft_strlen(base);
		if (temp == 0)
			break ;
	}
	if (sign == -1)
		buf[i++] = '-';
	buf[i] = '\0';
	return (display(buf));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	else
		number = ft_atoi_base_from(nbr, base_from);
	result = ft_itoa_base_to(number, base_to);
	return (result);
}
