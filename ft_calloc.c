/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:36:16 by acasanov          #+#    #+#             */
/*   Updated: 2023/10/11 12:57:43 by acasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	if (size <= 0 || count <= 0)
		return (malloc(0));
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
