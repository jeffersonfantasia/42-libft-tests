/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:06:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 21:20:11 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_LIBFT_H
# define MAIN_LIBFT_H

int		main_ft_tolower(int ch);
int		main_ft_toupper(int ch);
int		main_ft_isprint(int ch);
int		main_ft_isascii(int ch);
int		main_ft_isalnum(int ch);
int		main_ft_isdigit(int ch);
int		main_ft_isalpha(int ch);
void	*main_ft_memset(char *str);
void	main_ft_bzero(char *str1, char *str2, size_t n);

#endif