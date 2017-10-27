/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 10:30:17 by imelnych          #+#    #+#             */
/*   Updated: 2017/10/27 10:31:41 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b. Returns its first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;
	while (i < len)
	{
		((char*)(b))[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
