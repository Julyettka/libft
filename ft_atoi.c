/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 09:48:45 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/10 18:12:11 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int 		i;
	int 		is_negative;
	long long	num;
	size_t		numlength;

	i = 0;
	is_negative = 0;
	num = 0;
	while (ft_isdelim(str[i]))
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	if (is_negative)
		num = num * (-1);
	numlength = ft_numlen(num);
	if (numlength >= 19 || num > 9223372036854775807)
		return ((is_negative) ? -1 : 0);
	return (num);
}
