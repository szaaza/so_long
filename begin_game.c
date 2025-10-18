/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:46:10 by codespace         #+#    #+#             */
/*   Updated: 2025/10/18 21:43:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


static void	setup_map(t_game *game, char *input)
{
	file_check(input);
	game->map.grid = load_map_from_file(input);
	validate_map(game);
}


void	begin_game(t_game *game, char *input)
{
	setup_map(game, input);
}
