/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:19:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 13:12:42 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_tolower(int ch)
{
	int function;
	int ft_function;

	function = tolower(ch);
	ft_function = ft_tolower(ch);
	if (function == ft_function)
		printf("function = %c and ft_function = %c - OK\n", function, ft_function);
	else
		printf("function = %c and ft_function = %c - KO\n", function, ft_function);
	return (ch);
}
