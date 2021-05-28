/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:32:52 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/27 21:52:41 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

int	main_ft_isascii(int ch)
{
	printf("%#04x    ", ch);
	if (isascii(ch))
		printf("isascii: The character is %c\n", ch);
	else
		printf("isascii: Cannot be represented by an ASCII character\n");

	printf("%#04x    ", ch);
	if (ft_isascii(ch))
		printf("ft_isascii: The character is %c\n", ch);
	else
		printf("ft_isascii: Cannot be represented by an ASCII character\n");
	return 0;

}