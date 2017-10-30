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
	size_t		l;
	size_t		i;

	i = 0;
	l = ft_strlen(dst);
	while (src[i] && i < size - 1)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	return (i);
}
