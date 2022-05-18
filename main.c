/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <mea@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:36:51 by mea               #+#    #+#             */
/*   Updated: 2022/05/18 13:35:48 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	game_init(t_game *game, char **argv)
{
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, game->window_size->x, game->window_size->y, "THE MANSION");
	game->img = mlx_new_image(game->mlx, game->window_size->x, game->window_size->y);
	game->img->addr = mlx_get_data_addr(game->img, &game->img->bpp, &game->img->size_line, &game->img->endian);
}

int start(t_game *game, int argc, char **argv)
{
	(void) argv;
	(void) argc;
	game_init(&game, argv);

	return (0);
}
int main(int argc, char **argv)
{
	t_game	game;
	(void) argv;

	if (start(&game, argc, argv))
		return (0);
	//mlx_hook(game.window, 2, 0, keypress, (void *)&game);
	//mlx_hook(game.mlx, keyrelease, (void *)&game);
	//mlx_loop_hook(game.mlx, refresh, &game);
	mlx_loop(game.mlx);
	return (0);
}
