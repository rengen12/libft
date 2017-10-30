/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:34:50 by amichak           #+#    #+#             */
/*   Updated: 2017/10/30 15:34:52 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	while (*s1 == *s2 && s1 && s2)
	{
		if (*s1 == '\0')
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
