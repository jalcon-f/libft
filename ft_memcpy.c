/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:52:42 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:09:47 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}

/*int	main(void)
{
	char	buffer[20];
	char	mi_dato = 'H';
	size_t	buffer_size = sizeof(buffer);

	printf("Contenido inicial del buffer: %s\n", buffer);
	ft_memcpy(buffer, &mi_dato, buffer_size);
	printf("Contenido despues del memcpy: %s\n", buffer);
	return (0);
}*/
