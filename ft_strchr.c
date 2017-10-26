/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:20:02 by amichak           #+#    #+#             */
/*   Updated: 2017/10/26 18:20:06 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s != c)
		{
			s++;
		}

	}
	return ((char *)s);
}

int		main(void)
{
	char a[41];
	//char *r;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = '\0';
	a[4] = 'z';

	//r = ;
	ft_putstr(strchr(a, 'z'));
	//write(1, "\n", 1);
	//write(1, r, 3);
	//write(1, r, 3);
	//write(1, r, 3);
}