/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:52:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 20:08:26 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/main_libft.h"

void	main_ft_bzero(char *str1, char *str2, size_t n)
{
	str1 = (char *) malloc(strlen(str1) * sizeof(char));
	str2 = (char *) malloc(strlen(str2) * sizeof(char));

	bzero(str1, n);
	ft_bzero(str2, n);

	if (strcmp(str1, str2) == 0)
		printf("function and ft_function are equals - OK\n");
	else
		printf("function and ft_function are NOT equals - KO\n");
	free(str1);
	free(str2);
}
