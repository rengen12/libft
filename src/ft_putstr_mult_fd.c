/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_mult_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:53:00 by amichak           #+#    #+#             */
/*   Updated: 2018/08/19 14:53:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int				ft_putstr_mult_fd(int fd, int count, ...)
{
	va_list		ap;
	char		*temp;
	char		buff[4096];
	size_t		len_buff;

	ft_bzero(buff, 4096);
	va_start(ap, count);
	while (count--)
	{
		temp = va_arg(ap, char *);
		ft_strcat(buff, temp);
	}
	va_end(ap);
	len_buff = ft_strlen(buff);
	write(fd, buff, len_buff);
	return ((int)len_buff);
}