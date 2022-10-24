/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:34:43 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 20:34:43 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	int		digits;

	num = n;
	digits = digit_count(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	result = malloc(digits + 1);
	if (!result)
		return (NULL);
	result[digits] = '\0';
	while (digits--)
	{
		result[digits] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
