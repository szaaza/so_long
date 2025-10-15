/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mian.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:35:22 by codespace         #+#    #+#             */
/*   Updated: 2025/10/15 11:55:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	file_check(char *input)
{
	int	len;

	len = ft_strlen(input);
	if (len < 4)
		error_exit("Not valid name fir input");
	if (ft_strcmp(&input[len - 4], ".ber") != 0)
		error_exit(".ber input is required");
}
static void	begin_game(t_game *game, char *input)
{
	file_check(input);
	game->map.grid = load_map_from_file(input);


}
int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		error_exit("Usage: ./so_long <map.ber>");
	begin_game(&game, argv[1]);
	return (0);
}