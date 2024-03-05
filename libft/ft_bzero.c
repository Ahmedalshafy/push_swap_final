/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshafy <aalshafy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:06:35 by aalshafy          #+#    #+#             */
/*   Updated: 2023/11/09 12:06:50 by aalshafy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*c;

	i = 0;
	c = s;
	while (i < len)
	{
		c[i] = 0;
		i++;
	}
	return (s);
}