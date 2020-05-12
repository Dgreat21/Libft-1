/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 05:53:20 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 00:18:27 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LOWBITS ((unsigned long)-1 / (unsigned char)-1)
#define HIGHBITS (LOWBITS << 7)

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ch_s1;
	const unsigned char *ch_s2;
	const unsigned long *long_s1;
	const unsigned long *long_s2;

	long_s1 = (const unsigned long*)s1;
	long_s2 = (const unsigned long*)s2;
	while (*long_s1 == *long_s2 && n > sizeof(long) &&
	((*long_s1 - LOWBITS) & ~*long_s1 & HIGHBITS) == 0)
	{
		n = n - sizeof(long);
		long_s1++;
		long_s2++;
	}
	ch_s1 = (const unsigned char*)long_s1;
	ch_s2 = (const unsigned char*)long_s2;
	while (*ch_s1 == *ch_s2 && n)
	{
		if (*ch_s1 != *ch_s2)
			return (*ch_s1 - *ch_s2);
		n--;
		ch_s1++;
		ch_s2++;
	}
	return (0);
}
