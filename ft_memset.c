/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:06:12 by allharut          #+#    #+#             */
/*   Updated: 2023/09/18 12:15:15 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*c;
	unsigned char	val;
	size_t			i;

	c = ptr;
	val = (unsigned char)value;
	i = 0;
	while (i < len)
	{
		c[i] = val;
		i++;
	}
	return (ptr);
}
