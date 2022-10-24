/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:35:53 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 20:35:53 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	if (!n)
		return (NULL);
	i = 0;
	dest = (unsigned char *)str;
	while (i < n)
		dest[i++] = c;
	return (str);
}
