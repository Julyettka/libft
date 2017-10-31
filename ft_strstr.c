/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:36:47 by imelnych          #+#    #+#             */
/*   Updated: 2017/10/29 16:32:10 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** If needle is an empty string (needle_len == 0), haystack is returned;
** if needle is longer than haystack, NULL is returned;
** if needle occurs nowhere in haystack, NULL is returned;
** otherwise a pointer to the first character of the first occurrence of needle
** is returned.
*/

#include "libft.h"

// char	*ft_strstr(const char *haystack, const char *needle)
// {
// 	int		i;
// 	int		k;
// 	int		j;
// 	size_t	needle_len;
// 	size_t	hayst_len;

// 	i = 0;
// 	k = 0;
// 	hayst_len = ft_strlen(haystack);
// 	needle_len = ft_strlen(needle);
// 	if (needle_len > hayst_len)
// 		return (NULL);
// 	if (needle_len == 0)
// 		return ((char*)haystack);
// 	while (haystack[i] != '\0')
// 	{

// 	}
// 	return (NULL);
// }
