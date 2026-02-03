/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvicino <lvicino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:45 by lvicino           #+#    #+#             */
/*   Updated: 2023/11/20 17:41:57 by lvicino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_aux(long nb, int fd)
{
	char	c;

	if (nb == 0)
		return ;
	c = (nb % 10) + '0';
	ft_putnbr_fd_aux(nb / 10, fd);
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == 0)
		write(fd, "0", 1);
	else if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	ft_putnbr_fd_aux(nb, fd);
	return ;
}
