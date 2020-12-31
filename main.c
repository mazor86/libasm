/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:03:57 by mazor             #+#    #+#             */
/*   Updated: 2020/12/31 20:06:36 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);

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
	printf("\n\n");

	printf("_____ft_strcpy____\n\n");
	char	dst[1024];
	char	*src = "hello world";
	ft_strcpy(dst, src);
	printf("%s\n", dst);

	return (0);
}