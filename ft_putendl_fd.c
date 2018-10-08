/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 03:56:20 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 14:40:41 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char const *s, int fd)
{
	int x;

	x = 0;
	while (s[x])
		x++;
	write(fd, &s, x);
	ft_putchar_fd('\n', fd);
}