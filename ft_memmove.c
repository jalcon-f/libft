/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcon-f <jalcon-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 01:40:34 by jalcon-f          #+#    #+#             */
/*   Updated: 2024/02/17 13:25:49 by jalcon-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*dest_ptr;

	dest_ptr = dst;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *) src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (dest_ptr);
}

/*int	main(void)
{
	char	src[] = "Hola Mundo";
	char	dst[5];
	ft_memmove(dst, src, sizeof(src));
	printf("Cadena original: %s\n", src);
	printf("Cadena desntino: %s\n", dst);
}*/
