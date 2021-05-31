/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:40:03 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 13:44:56 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isalnum(int ch)
{
	int function;
	int ft_function;

	function = isalnum(ch);
	ft_function = ft_isalnum(ch);
	if (function == ft_function)
		printf("function = %d and ft_function = %d - OK\n", function, ft_function);
	else
		printf("function = %d and ft_function = %d - KO\n", function, ft_function);
	return (ch);
}
