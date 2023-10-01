/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:51:36 by isbarka           #+#    #+#             */
/*   Updated: 2023/08/27 01:20:18 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

void	*ft_calloc(size_t size)
{
	void	*s;

	s = malloc(size);
	if (!s)
	{
		ft_error("malloc failed");
	}
	ft_bzero (s, size);
	return (s);
}
