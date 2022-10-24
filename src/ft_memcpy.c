/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:35:15 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 20:35:15 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*s1;

	if (dest == src)
		return (dest);
	i = 0;
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
