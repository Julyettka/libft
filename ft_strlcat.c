/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:14:01 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/09 19:30:44 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends the NUL-terminated str src to the end of dst. Takes the full
** size of the buffer (not just the length) and guarantee to NUL-terminate the
** result as long as there is at least one byte free in dst. A byte for the
** NUL should be included in size. For strlcat() both src and dst must be
** NUL-terminated. It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result. The source and destination strings should not
** overlap, as the behavior is undefined.
** RETURN VALUES: strlcat() functions return the total length of the string it
** tried to create.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);

	while (src[i] != '\0' && i < size)
	{
		dst[len1] = src[i];
		len1++;
		i++;
	}
	dst[len1] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (len1 + i);
}
