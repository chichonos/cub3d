/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:35:54 by mea               #+#    #+#             */
/*   Updated: 2022/05/18 14:42:31 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

#include <mlx.h>
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>

# define ROTATE_LEFT 123
# define ROTATE_RIGHT 124
# define FORWARD_W_Z 13
# define BACK_S_S 1
# define RIGHT_D_D 2
# define LEFT_A_Q 0

typedef struct s_vector
{
	int	x;
	int	y;
}				t_vector;

typedef struct s_pos
{
	int	x;
	int	y;
}				t_pos;

typedef struct s_player
{
    t_pos pos;
    //img

}				t_player;

typedef struct	s_data 
{
	void	*img;
	char	*addr;
	int		bpp;
	int		size_line;
	int		endian;
}				t_data;

typedef struct s_game
{
	void		*mlx;
	t_vector	*window;
	t_vector	*window_size;
	t_data		*img;
	
}				t_game;


#endif
