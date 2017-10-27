/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 10:53:58 by imelnych          #+#    #+#             */
/*   Updated: 2017/10/17 10:54:04 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The bzero() function writes n zeroed bytes to the string s.  If n is
** zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = '\0';
		i++;
	}
}
