/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:52:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 20:07:33 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

void	*main_ft_memset(char *str)
{
	str = (char *) malloc(strlen(str) * sizeof(char));

	char *str1 = ft_memset(str, '-', 7);
	char *str2 = memset(str, '-', 7);

	if (strcmp(str1, str2) == 0)
		printf("function and ft_function are equals - OK\n");
	else
		printf("function and ft_function are NOT equals - KO\n");
	free (str);
	return (str);
}
