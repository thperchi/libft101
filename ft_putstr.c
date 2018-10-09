/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 03:43:05 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 17:29:10 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	char *str;
	int x;

	if(!(str = (char *)s))
		return ;
	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}
