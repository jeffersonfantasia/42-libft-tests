/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:40:03 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 21:22:10 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isalpha(int ch)
{
	int	function;
	int	ft_function;

	function = isalpha(ch);
	ft_function = ft_isalpha(ch);
	if (function == ft_function)
		printf("function = %d and ft_function = %d - OK\n", \
		function, ft_function);
	else
		printf("function = %d and ft_function = %d - KO\n", \
		function, ft_function);
	return (ch);
}
