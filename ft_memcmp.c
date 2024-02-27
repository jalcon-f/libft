/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:22:37 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 14:11:35 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
			return ((int)(((unsigned char *) s1)[i] -
						((unsigned char *) s2)[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str1 = "Hola";
	const char	*str2 = "Holi";
	size_t	comparar = 5;

	int resultado = ft_memcmp(str1, str2, comparar);

	if (resultado == 0)
	{
		printf("Las cadenas son iguales.\n");
	}else if (resultado < 0){
		printf("La cadena 1 es menor que la cadena 2.\n");
	}else{
		printf("La cadena 1 es mayor que la cadena 2.\n");
	}
	return (0);
}*/
