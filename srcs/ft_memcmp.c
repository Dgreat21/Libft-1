/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiandre <jiandre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 05:53:20 by jiandre           #+#    #+#             */
/*   Updated: 2020/05/13 12:23:32 by jiandre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ch_s1;
	const unsigned char *ch_s2;

	if (n == 0)
		return (0);
	ch_s1 = (const unsigned char*)s1;
	ch_s2 = (const unsigned char*)s2;
	while (n--)
	{
		if (*ch_s1 != *ch_s2)
			return (*ch_s1 - *ch_s2);
		ch_s1++;
		ch_s2++;
	}
	return (0);
}
