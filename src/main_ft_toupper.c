/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:19:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 20:50:12 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_toupper(int ch)
{
	int	function;
	int	ft_function;

	function = toupper(ch);
	ft_function = ft_toupper(ch);
	if (function == ft_function)
		printf("function = %c and ft_function = %c - OK\n", \
		 function, ft_function);
	else
		printf("function = %c and ft_function = %c - KO\n", \
		 function, ft_function);
	return (ch);
}
