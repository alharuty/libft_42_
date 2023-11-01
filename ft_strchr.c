/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allharut <allharut@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:07:06 by allharut          #+#    #+#             */
/*   Updated: 2023/10/02 11:43:24 by allharut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int	i;

	i = 0;
	character &= 0xFF;
	if (character == '\0')
	{
		while (str[i])
		{
			i++;
		}
		return ((char *)&str[i]);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] == character)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
