/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:50:32 by ysahih            #+#    #+#             */
/*   Updated: 2023/08/27 01:23:48 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

void	render_ceiling(mlx_image_t *image, unsigned int color)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < HEIGHT / 2)
	{
		x = 0;
		while (x < WIDTH)
		{
			mlx_put_pixel(image, x, y, color);
			x++;
		}
		y++;
	}
}

void	render_floor(mlx_image_t *image, unsigned int color)
{
	int	x;
	int	y;

	x = 0;
	y = HEIGHT / 2;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			mlx_put_pixel(image, x, y, color);
			x++;
		}
		y++;
	}
}

void	rerender(void *inf)
{
	unsigned int	c_color;
	unsigned int	f_color;
	t_data			*info;

	info = inf;
	c_color = rgba(info->sources.c_r,
			info->sources.c_g, info->sources.c_b, 255);
	f_color = rgba(info->sources.f_r,
			info->sources.f_g, info->sources.f_b, 255);
	render_ceiling(info->mlx.image, c_color);
	render_floor(info->mlx.image, f_color);
	render_walls(info);
	render_minimap(info);
}

void	display_map(t_data *info)
{
	mlx_image_to_window(info->mlx.mlx, info->mlx.image, 0, 0);
	mlx_loop_hook(info->mlx.mlx, click, info);
	mlx_loop_hook(info->mlx.mlx, ray, info);
	mlx_loop_hook(info->mlx.mlx, rerender, info);
	mlx_loop(info->mlx.mlx);
}
