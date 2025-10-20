/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:54:09 by codespace         #+#    #+#             */
/*   Updated: 2025/10/20 20:37:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_rectangular(t_game *game)
{
	int	expected_len;

	expected_len = ft_strlen(game->map.grid[0]);
	check_row_length(game->map.grid, expected_len);
}

static void	check_walls(t_game *game)
{
	check_horizontal_walls(game->map.grid, game->map.width, game->map.height);
	check_vertical_walls(game->map.grid, game->map.width, game->map.height);
}


int	validate_map(t_game *game)
{
	game->map.width = ft_strlen(game->map.grid[0]);
	game->map.height = 0;
	while (game->map.grid[game->map.height])
		game->map.height++;

	check_rectangular(game);
	check_walls(game);

	return (1);
}
