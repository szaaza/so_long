/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mian.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:35:22 by codespace         #+#    #+#             */
/*   Updated: 2025/10/14 16:41:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_file(char *file)
{
	int	len;

	len = ft_strlen(file);
	if (len < 4)
		error_exit("Invalid file name");
	if (ft_strcmp(&file[len - 4], ".ber") != 0)
		error_exit("Map file must have .ber extension");
}
static void	begin_game(t_game *game, char *file)
{
	check_file(file);

}
int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		error_exit("Usage: ./so_long <map.ber>");
	begin_game(&game, argv[1]);
	return (0);
}