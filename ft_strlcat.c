/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:09:30 by amichak           #+#    #+#             */
/*   Updated: 2017/10/26 18:09:33 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		l;

	l = ft_strlen(dst);
	i = 0;
	if (size == 0)
		size++;
	while (src[i] && i + l < size - 1)
	{
		dst[i + l] = src[i];
		i++;
	}
	dst[i + l] = '\0';
	if (size > l)
		size = l;
	return (size + ft_strlen(src));
}
