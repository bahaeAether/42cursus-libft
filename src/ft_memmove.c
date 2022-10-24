/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:35:30 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 20:35:30 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;

	if (dest == src)
		return (dest);
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	if (s1 < d1)
		while (n--)
			d1[n] = s1[n];
	else
		ft_memcpy(d1, s1, n);
	return (dest);
}
