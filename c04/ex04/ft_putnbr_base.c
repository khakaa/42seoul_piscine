/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harpark <harpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:07:47 by harpark           #+#    #+#             */
/*   Updated: 2021/03/16 23:19:26 by harpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (!(*base))
		return (0);
	i = 0;
	while (base[i])
	{
		if (ft_strlen(base) == 1)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int base_l;

	base_l = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / base_l, base);
			ft_putchar(base[(nbr % base_l) * -1]);
			return ;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= base_l)
		{
			ft_putnbr_base(nbr / base_l, base);
		}
		ft_putchar(base[nbr % base_l]);
	}
}
