/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:15:37 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/27 21:42:58 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isprint(int ch)
{
	if( isprint(ch) ) {
		printf("ch = |%c| can be printed\n", ch);
	} else {
		printf("ch = |%c| can't be printed\n", ch);
	}

	if( ft_isprint(ch) ) {
		printf("ch = |%c| can be printed\n", ch);
	} else {
		printf("ch = |%c| can't be printed\n", ch);
	}

	return (ch);
}