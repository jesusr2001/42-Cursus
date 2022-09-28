/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:52:53 by jerodrig          #+#    #+#             */
/*   Updated: 2022/09/27 12:52:57 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int x, int fd);
{
	if (x == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		x = 147483648;
	}
	if (x < 0)
	{
		ft_putchar_fd('-');
		x = -x;
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10);
		x = x % 10;
	}
	if (x < 10)
	{
		ft_putchar_fd(x + 48);
	}
}
