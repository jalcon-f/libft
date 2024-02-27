/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:13:31 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:07:16 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

/*int	main(void)
{
	char	buffer[20];
	size_t	buffer_size = sizeof(buffer);

	printf("Contenido inicial del buffer: %s\n", buffer);
	ft_bzero(buffer, buffer_size);
	printf("Contenido despues del bzero: %s\n", buffer);
	return (0);
}*/
