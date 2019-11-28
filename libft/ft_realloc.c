/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cniranye <cniranye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:08:01 by cniranye          #+#    #+#             */
/*   Updated: 2019/11/28 22:08:47 by cniranye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*dptr;

	if (!size)
	{
		ft_memdel(&ptr);
		return (ptr);
	}
	if (!ptr)
		return (malloc(size));
	dptr = malloc(size);
	if (!dptr)
		return (NULL);
	dptr = ft_memcpy(dptr, ptr, size);
	ft_memdel(&ptr);
	return (dptr);
}
