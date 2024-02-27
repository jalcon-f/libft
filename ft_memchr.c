/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:50:30 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/27 23:15:30 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str = "Hola Mundo";
	char	buscar_char = 'M';
	size_t	buscar_size = 13;

	void *resultado = ft_memchr(str, (int)buscar_char, buscar_size);

	if (resultado != NULL)
	{
		printf("El caracter '%c' fue encontrado en la posicion %ld. \n", 
		buscar_char, (size_t)(resultado - (void *)str));
	}
	else
	{
		printf("El caracter '%c' no fue encontrado en 
		los primeros %ld bytes. \n", buscar_char, buscar_size);
	}
	return (0);
}*/
