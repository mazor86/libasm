/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:03:57 by mazor             #+#    #+#             */
/*   Updated: 2021/01/01 18:45:06 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libasm.h"

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
	bzero(dst, 1024);
	char	*src = "hello world";
	ft_strcpy(dst, src);
	printf("%s\n", dst);
	
	printf("\n\n");
	printf("_____ft_strcmp____\n\n");
	char	*s1 = "hello";
	char	*s2 = "hello";
	char	*s3 = "hello world";
	char	*s4 = "";
	char	*s5 = "";
	printf("compare s1=\"%s\" s2=\"%s\"\n", s1, s2);
	printf("strcmp = %d\n", strcmp(s1, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	
	printf("compare s1=\"%s\" s2=\"%s\"\n", s1, s3);
	printf("strcmp = %d\n", strcmp(s1, s3));
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s3));
	
	printf("compare s1=\"%s\" s2=\"%s\"\n", s3, s2);
	printf("strcmp = %d\n", strcmp(s3, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s3, s2));
	
	printf("compare s1=\"%s\" s2=\"%s\"\n", s4, s5);
	printf("strcmp = %d\n", strcmp(s4, s5));
	printf("ft_strcmp = %d\n", ft_strcmp(s4, s5));
		
	printf("compare s1=\"%s\" s2=\"%s\"\n", s4, s2);
	printf("strcmp = %d\n", strcmp(s4, s2));
	printf("ft_strcmp = %d\n", ft_strcmp(s4, s2));
	return (0);
}