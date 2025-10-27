/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:35:22 by codespace         #+#    #+#             */
/*   Updated: 2025/10/18 21:39:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	file_check(char *input)
{
	int	len;

	len = ft_strlen(input);
	if (len < 4)
		error_exit("Not valid name fir input");
	if (ft_strcmp(&input[len - 4], ".ber") != 0)
		error_exit(".ber input is required");
}



int	main(int argc, char **argv)
{
	t_game	game;


	
	if (argc != 2)
		error_exit("Usage: ./so_long <map.ber>");
	begin_game(&game, argv[1]);
	return (0);
}
