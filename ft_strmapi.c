/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 03:44:06 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/11 04:10:57 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	funcion_prueba(unsigned int i, char str)
{
	printf("Mi funcion de ejemplo: hola = %d y %c\n", i, str);
	return str - 32;
}

int	main(void)
{
	char	str[15] = "hola";
	printf("La cadena inicial es: %s\n", str);
	char *resultado = ft_strmapi(str, funcion_prueba);
	printf("El resultado es: %s\n", resultado);
	return (0);
}*/
