/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:42:53 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/06 03:43:11 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*len_dst;

	if (size)
	{
		len_dst = dst + ft_strlen(dst);
		ft_memcpy(len_dst, src, size - 1);
		*(len_dst + size) = '\0';
		return (ft_strlen(dst));
	}
	else
	{
		*dst = '\0';
		return (0);
	}
}