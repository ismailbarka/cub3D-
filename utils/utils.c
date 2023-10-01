/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:52:10 by ysahih            #+#    #+#             */
/*   Updated: 2023/08/27 01:25:54 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

char	*ft_read_map2d1(char *map, int fd)
{
	char	*str;
	int		i;

	i = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		i++;
		map = ft_strjoin(map, str);
		free(str);
	}
	return (map);
}

char	**ft_read_map2d(char *av, t_data *info)
{
	char	**map2d;
	char	**map2d1;
	char	*map;
	int		fd;

	check_av(av);
	fd = open((const char *)av, O_RDWR);
	if (fd == -1)
	{
		write(1, "cound not find the map\n", 23);
		exit(-1);
	}
	map = NULL;
	map = ft_read_map2d1(map, fd);
	check_map(map);
	map2d = ft_split(map, '\n');
	map2d1 = ft_split_one(map, '\n');
	info->map2d1 = map2d1;
	check_empty_line(map2d1);
	free(map);
	return (map2d);
}
