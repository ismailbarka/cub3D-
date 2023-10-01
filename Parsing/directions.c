/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 18:18:22 by isbarka           #+#    #+#             */
/*   Updated: 2023/08/27 01:22:48 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

char	*ft_so(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "SO ", 3) == 0)
		{
			if (info->map2d[i][3])
				return (ft_strdup(&(info->map2d[i][3])));
			else
				ft_error("empty");
		}
		i++;
	}
	ft_error("need arguments");
	return (NULL);
}

char	*ft_we(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "WE ", 3) == 0)
		{
			if (info->map2d[i][3])
				return (ft_strdup(&(info->map2d[i][3])));
			else
				ft_error("empty");
		}
		i++;
	}
	ft_error("need arguments");
	return (NULL);
}

char	*ft_ea(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "EA ", 3) == 0)
		{
			if (info->map2d[i][3])
				return (ft_strdup(&(info->map2d[i][3])));
			else
				ft_error("empty");
		}
		i++;
	}
	ft_error("need argument");
	return (NULL);
}

char	*ft_no(t_data *info)
{
	int		i;

	i = 0;
	while (info->map2d[i])
	{
		if (ft_strncmp(info->map2d[i], "NO ", 3) == 0)
		{
			if (info->map2d[i][3])
				return (ft_strdup(&(info->map2d[i][3])));
			else
				ft_error("empty");
		}
		i++;
	}
	ft_error("need arguments");
	return (NULL);
}
