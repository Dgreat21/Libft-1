/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 04:47:34 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/08 07:45:51 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	ft_memccpy(dst, s + start, '\0', len);
	*(dst + len) = '\0';
	return (dst);
}
