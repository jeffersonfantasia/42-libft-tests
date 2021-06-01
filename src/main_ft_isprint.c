/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:15:37 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 21:25:00 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isprint(int ch)
{
	int	function;
	int	ft_function;

	function = isprint(ch);
	ft_function = ft_isprint(ch);
	if (function == ft_function)
		printf("function = %d and ft_function = %d - OK\n", \
		function, ft_function);
	else
		printf("function = %d and ft_function = %d - KO\n", \
		function, ft_function);
	return (ch);
}
