/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:29:56 by amichak           #+#    #+#             */
/*   Updated: 2017/10/30 15:29:59 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cr;

	if (n == 0)
		return (s);
	cr = (unsigned char *)s;
	while (n--)
	{
		*cr = (unsigned char)c;
		if (n)
			cr++;
	}
	return (s);
}
