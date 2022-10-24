/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:31:49 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 21:31:49 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(ft_strlen(src) + 1);
	ft_strlcpy(dup, src, ft_strlen(src) + 1);
	return (dup);
}
