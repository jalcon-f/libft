/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:41:47 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:33:44 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}

/*int	main(void)
{
	char	*src = ", el mejor";
	char	dst[24] = "Jordi Alcon";
	size_t	copied_len;

	printf("Antes de la concatenacion: %s\n", dst);
	copied_len = ft_strlcat(dst, src, sizeof(dst));
	printf("Cadena concatenada: %s\n", dst);
}*/
