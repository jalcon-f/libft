/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:25:32 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:05:27 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Declaramos variable chh para almacenar el valor de 'c'*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			chh;
	unsigned char	*ptr;

	i = 0;
	chh = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (len--)
		ptr[i++] = chh;
	return (ptr);
}

/*int	main(void)
{
	char	espacio[20];
	size_t	esp_buffer = sizeof(espacio);

	printf("Contenido inicial en el buffer: %s\n", espacio);

	ft_memset(espacio, 'A', esp_buffer);

	printf("Contenido despues de ft_memset: %s\n", espacio);

	return (0);
}*/
