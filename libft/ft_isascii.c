/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerodrig <jerodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:24:21 by jerodrig          #+#    #+#             */
/*   Updated: 2022/09/26 17:31:22 by jerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 0  && str[i] <= 127)
		{
			i++;
		}
		if (str[i] != '\0')
		{
			return (0);
		}
	}
	return (1);
}
