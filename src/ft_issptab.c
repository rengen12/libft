/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issptab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 14:08:48 by amichak           #+#    #+#             */
/*   Updated: 2017/10/31 16:21:07 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_issptab(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
