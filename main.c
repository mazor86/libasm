/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:03:57 by mazor             #+#    #+#             */
/*   Updated: 2021/01/07 17:33:37 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libasm.h"
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

int		main(void)
{
	char	*str1 = "hello, world!";
	char	*str2 = "";
	char	*str3 = "hid\0den";
	char	*str4 = "\t\n\\ ";
	char	*str5 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";

	
	printf("\n***** TEST ft_strlen*****\n\n");
	printf("TEST 1:\n");
	printf("%12s: %zu\n", "strlen", strlen(str1));
	printf("%12s: %zu\n", "ft_strlen", ft_strlen(str1));

	printf("TEST 2:\n");
	printf("%12s: %zu\n", "strlen", strlen(str2));
	printf("%12s: %zu\n", "ft_strlen", ft_strlen(str2));

	printf("TEST 3:\n");
	printf("%12s: %zu\n", "strlen", strlen(str3));
	printf("%12s: %zu\n", "ft_strlen", ft_strlen(str3));

	printf("TEST 4:\n");
	printf("%12s: %zu\n", "strlen", strlen(str4));
	printf("%12s: %zu\n", "ft_strlen", ft_strlen(str4));

	printf("TEST 5:\n");
	printf("%12s: %zu\n", "strlen", strlen(str5));
	printf("%12s: %zu\n", "ft_strlen", ft_strlen(str5));

	printf("\n***** TEST ft_strcpy*****\n\n");
	char	dst[1024];
	bzero(dst, 1024);
	printf("TEST 1:\n");
	printf("%12s: %s\n", "strcpy", strcpy(dst, str1));
	bzero(dst, 1024);
	printf("%12s: %s\n", "ft_strcpy", ft_strcpy(dst, str1));

	printf("TEST 2:\n");
	printf("%12s: %s\n", "strcpy", strcpy(dst, str2));
	printf("%12s: %s\n", "ft_strcpy", ft_strcpy(dst, str2));

	printf("TEST 3:\n");
	printf("%12s: %s\n", "strcpy", strcpy(dst, str3));
	printf("%12s: %s\n", "ft_strcpy", ft_strcpy(dst, str3));

	printf("TEST 4:\n");
	printf("%12s: %s\n", "strcpy", strcpy(dst, str4));
	printf("%12s: %s\n", "ft_strcpy", ft_strcpy(dst, str4));
	
	printf("TEST 5:\n");
	printf("%12s: %s\n", "strcpy", strcpy(dst, str5));
	printf("%12s: %s\n", "ft_strcpy", ft_strcpy(dst, str5));

	printf("\n");
	
	printf("\n***** TEST ft_strcmp*****\n\n");
	
	printf("TEST 1:\n");
	printf("%12s: %d\n", "strcmp", strcmp(str1, str1));
	printf("%12s: %d\n", "ft_strcmp", ft_strcmp(str1, str1));

	printf("TEST 2:\n");
	printf("%12s: %d\n", "strcmp", strcmp(str2, str2));
	printf("%12s: %d\n", "ft_strcmp", ft_strcmp(str2, str2));

	printf("TEST 3:\n");
	printf("%12s: %d\n", "strcmp", strcmp(str3, str2));
	printf("%12s: %d\n", "ft_strcmp", ft_strcmp(str3, str2));

	printf("TEST 4:\n");
	printf("%12s: %d\n", "strcmp", strcmp(str2, str4));
	printf("%12s: %d\n", "ft_strcmp", ft_strcmp(str2, str4));

	printf("TEST 5:\n");
	printf("%12s: %d\n", "strcmp", strcmp(str5, str4));
	printf("%12s: %d\n", "ft_strcmp", ft_strcmp(str5, str4));

	printf("\n");
	
	printf("\n***** TEST ft_strdup*****\n\n");
	
	printf("TEST 1:\n");
	printf("%12s: %s\n", "strdup", strdup(str1));
	printf("%12s: %s\n", "ft_strdup", ft_strdup(str1));

	printf("TEST 2:\n");
	printf("%12s: %s\n", "strdup", strdup(str2));
	printf("%12s: %s\n", "ft_strdup", ft_strdup(str2));

	printf("TEST 3:\n");
	printf("%12s: %s\n", "strdup", strdup(str3));
	printf("%12s: %s\n", "ft_strdup", ft_strdup(str3));

	printf("TEST 4:\n");
	printf("%12s: %s\n", "strdup", strdup(str4));
	printf("%12s: %s\n", "ft_strdup", ft_strdup(str4));

	printf("TEST 5:\n");
	printf("%12s: %s\n", "strdup", strdup(str5));
	printf("%12s: %s\n", "ft_strdup", ft_strdup(str5));
	printf("\n");
	
	printf("\n***** TEST ft_write*****\n\n");
	
	printf("TEST 1:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(1, "libasm", 6), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(1, "libasm",6), errno);

	printf("TEST 2:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(1, NULL, 6), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(1, NULL,6), errno);

	printf("TEST 3:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(1, "libasm", 3), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(1, "libasm",3), errno);
	
	printf("TEST 4:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(-1, "libasm", 6), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(-1, "libasm",6), errno);
	
	printf("TEST 5:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(1, "libasm", -8), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(1, "libasm",-8), errno);
	
	printf("TEST 6:\n");
	errno = 0;
	printf("%12s: |%zd| errno = %d\n", "write", write(1, "", 0), errno);
	printf("%12s: |%zd| errno = %d\n", "ft_write", ft_write(1, "",0), errno);

	printf("\n");
	
	printf("\n***** TEST ft_read*****\n\n");
	int		fd;
	bzero(dst, 1024);
	ssize_t	read_b;

	printf("TEST 1:\n");
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, dst, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, dst, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd)
	;
	printf("TEST 2:\n");
	fd = open("main.c", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, dst, 50);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("main.c", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, dst, 50);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd);

	printf("TEST 3:\n");
	fd = open("nofile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, dst, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("nofile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, dst, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd);

	printf("TEST 4:\n");
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, NULL, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, NULL, 30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd);

	printf("TEST 5:\n");
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, dst, 0);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, dst, 0);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd);

	printf("TEST 6:\n");
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = read(fd, dst, -30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "read", read_b, errno);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	errno = 0;
	bzero(dst, 1024);
	read_b = ft_read(fd, dst, -30);
	printf("begin>>%s<<end\n%12s : %zd : errno = %d\n", dst, "ft_read", read_b, errno);
	close(fd);
	
	return (0);
}