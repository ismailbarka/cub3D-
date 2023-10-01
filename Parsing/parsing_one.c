/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:17:01 by isbarka           #+#    #+#             */
/*   Updated: 2023/08/27 01:22:10 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

char	*ft_f(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "F ", 2) == 0)
		{
			return (ft_strdup(&(info->map2d[i][2])));
		}
		i++;
	}
	ft_error("need arguments");
	return (NULL);
}

char	*ft_c(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "C ", 2) == 0)
		{
			return (ft_strdup(&(info->map2d[i][2])));
		}
		i++;
	}
	ft_error("need arguments");
	return (NULL);
}
