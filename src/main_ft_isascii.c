/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:32:52 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 21:23:02 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isascii(int ch)
{
	int	function;
	int	ft_function;

	function = isascii(ch);
	ft_function = ft_isascii(ch);
	if (function == ft_function)
		printf("function = %d and ft_function = %d - OK\n", \
		function, ft_function);
	else
		printf("function = %d and ft_function = %d - KO\n", \
		function, ft_function);
	return (ch);
}
