/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:15:17 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 14:02:54 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}

/*int	main(void)
{
	const char	*s1 = "Hola Mundo";
	const char	*s2 = "Hola";
	size_t n = ft_strlen(s1);

	if (n > ft_strlen(s1))
	{
		n = ft_strlen(s2);
	}
	int resultado = ft_strncmp(s1, s2, n);

	if (resultado == 0)
	{
		printf("Las primeras %lu letras de ambas cadenas son iguales. \n", n);
	}
	else if (resultado < 0)
	{
		printf("La primera cadena es menor que la segunda. \n");
	}else{
		printf("La primera cadena es mayor que la segunda. \n");
	}
	return (0);
}*/
