/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabet <fabet@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:15:38 by fabet             #+#    #+#             */
/*   Updated: 2022/11/13 20:25:39 by fabet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# define WHITESPACE " \t\v\f\r\n"

typedef struct s_gl	t_gl;

char				*ft_get_line(int fd);
char				*ft_trim_line(char *line);
char				*ft_trim_line_back(char *line);
char				*ft_strtrim_back(char const *s1, char const *set);

void				*ft_make_img(void *mlx_ptr, char *xpmFile);
int					ft_str_to_rgb(char *str);
char				*ft_strtrim_back(char const *s1, char const *set);
void				ft_put_img(t_gl *gl, void *img, int x, int y);
int					ft_get_valid_rgb(char *str);

#endif
