/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 05:37:29 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 16:06:38 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ((void) NULL);
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	str[] = "Animo Jordi";
	int	salida = 1;
	ft_putendl_fd(str, salida);
	return (0);
}*/
