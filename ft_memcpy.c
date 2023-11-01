/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:31 by allharut          #+#    #+#             */
/*   Updated: 2023/09/18 12:07:28 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{	
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *restrict)dst;
	s = (const unsigned char *restrict)src;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n--)
	{
		if (s == NULL)
		{
			*d++ = 0;
		}
		else
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
