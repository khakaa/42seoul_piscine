/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:13:19 by harpark           #+#    #+#             */
/*   Updated: 2021/03/18 17:53:35 by harpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	if (!(result = (int *)malloc(sizeof(int) * (long long)(max - min))))
		return (NULL);
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}
