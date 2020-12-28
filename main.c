/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:03:57 by mazor             #+#    #+#             */
/*   Updated: 2020/12/28 15:58:22 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str);

int		main(void)
{
	char	*str;

	printf("_____ft_strlen______\n\n");
	str = "12345";
	printf("|%s| len = %zu\n", str,  ft_strlen(str));
	str = "Hello, world!!!";
	printf("|%s| len = %zu\n", str,  ft_strlen(str));
	str = "";
	printf("|%s| len = %zu\n", str,  ft_strlen(str));

	return (0);
}