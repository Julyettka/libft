/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:15:17 by imelnych          #+#    #+#             */
/*   Updated: 2017/10/23 11:15:18 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

#include "libft.h"

static size_t	ft_dlen(n)
{
	size_t 	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = n * (-1);
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		is_negative;
	size_t	len;
	char 	*str;

	len = ft_dlen(n);
	str = ft_strnew(len);
	is_negative = 0;
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		is_negative = 1;
	}
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (is_negative){
		str[len + 1] = '-';
	}
	return (str);
}
