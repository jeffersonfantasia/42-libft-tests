/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:19:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/27 21:39:23 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_toupper(int ch)
{
	printf("%c in lowercase is represented as = %c\n", ch, tolower(ch));
	printf("%c in lowercase is represented as = %c\n\n", ch, ft_tolower(ch));
	return (ch);
}