/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:12:37 by harpark           #+#    #+#             */
/*   Updated: 2021/03/18 14:45:56 by harpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		strs_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	s_i;
	int	d_i;

	s_i = 0;
	d_i = ft_strlen(dest);
	while (src[s_i])
		dest[d_i++] = src[s_i++];
	dest[d_i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		*result = 0;
		return (result);
	}
	if (!(result = malloc(sizeof(char) * strs_len(size, strs, sep))))
		return (NULL);
	*result = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
