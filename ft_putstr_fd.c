/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 05:31:29 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 15:59:59 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			write(fd, &s[i++], 1);
}

/*int	main(void)
{
	char	caracter[] = "Jordi el mejor";
	int	salida = 1;
	ft_putstr_fd(caracter, salida);
	return (0);
}*/
