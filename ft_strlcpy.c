/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:23:57 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:27:58 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*int	main(void)
{
	char	src[] = "Hola Mundo";
	char	dest[7];
	size_t copied_len;

	copied_len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Cadena original: %s\n", src);
	printf("Cadena destino: %s\n", dest);
}*/
