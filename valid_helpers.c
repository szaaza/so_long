/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:54:14 by codespace         #+#    #+#             */
/*   Updated: 2025/10/20 20:34:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_row_length(char **grid, int expected_len)
{
	int	len;
	int	i;

	i = 0;
	while (grid[i])
	{
		len = ft_strlen(grid[i]);
		if (len != expected_len)
			error_exit("Map is not rectangular");
		i++;
	}
}

void	check_horizontal_walls(char **grid, int width, int height)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (grid[0][i] != '1' || grid[height - 1][i] != '1')
			error_exit("Map is not surrounded by walls");
		i++;
	}
}

void	check_vertical_walls(char **grid, int width, int height)
{
	int	j;

	j = 0;
	while (j < height)
	{
		if (grid[j][0] != '1' || grid[j][width - 1] != '1')
			error_exit("Map is not surrounded by walls");
		j++;
	}
}


