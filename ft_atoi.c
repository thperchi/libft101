/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 01:57:43 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 18:05:46 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			z = 1;
		x++;
	}
	while ((str[x] >= '0' && str[x] <= '9'))
	{
		y = y * 10 + str[x] - 48;
		x++;
	}
	if (z == 1)
		y = y * -1;
	return (y);
}
