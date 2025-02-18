/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:11:15 by acasanov          #+#    #+#             */
/*   Updated: 2023/10/15 12:00:12 by acasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	else
		return (-nbr);
}

static void	ft_strrev(char	*str)
{
	size_t	length;
	size_t	i;
	size_t	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
	str[length] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	str = ft_calloc(11 + is_neg, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length] = '0' + ft_abs(n % 10);
		n = (n / 10);
		length++;
	}
	if (is_neg)
		str[length] = '-';
	ft_strrev(str);
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s",ft_itoa(7643368));
}*/
