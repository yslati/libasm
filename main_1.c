/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 10:50:35 by obouykou          #+#    #+#             */
/*   Updated: 2020/10/27 13:56:47 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t		ft_read(int fildes, const void *buf, size_t nbyte);
char		*ft_strdup(const char *src);

int			main(void)
{
	int			bz;
	int 		fd1;
	int			fd2;
	ssize_t		n;
	char		s[64] = "Hello, World!";
	
	bz = 12;
	/* 
	 * write  
	 */
 	fd1 = open("./test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	fd2 = open("./test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	n = ft_write(fd1, s, bz);
	printf("\n|M| ==> the return value of ft_write is |%ld|\n", n);
	printf("errno = |%d|", errno);
	n =    write(fd2, s, bz);
	printf("\n|O| ==> the return value of    write is |%ld|\n", n);
	printf("errno = |%d|\n", errno);
	close(fd1);
	close(fd2); 
	/*
	 ** read 
	 */
 	fd1 = open("test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	fd2 = open("test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	n = ft_read(fd1, s, bz);
	printf("\n|M| ==> the return value of ft_read is |%zd| and s=|%s|\n", n, s);
	printf("errno = |%d|\n", errno);
	n =    read(fd2, s, bz);
	printf("|O| ==> the return value of    read is |%zd| and s=|%s|\n", n, s);
	printf("errno = |%d|\n", errno);
	close(fd1);
	close(fd2); 
	/* 
	 * strdup 
	 */
	printf("\n|M| ==> string by ft_strdup is |%s|\n", ft_strdup(s));
	printf("errno = |%d|\n", errno);
	printf("|O| ==> string by    strdup is |%s|\n",  strdup(s));
	printf("errno = |%d|\n", errno);
	/* 
	 * strlen 
	 */
 	printf("\n|M| ==> Return value by ft_strlen = |%zu|\n", ft_strlen(s));
	printf("|O| ==> Return value by    strlen = |%zu|\n\n", strlen(s)); 
	/* 
	 * strcpy 
	 */
	printf("|M| ==> the dest1 by ft_strcpy is |%s|\n", ft_strcpy(s, "How are you ?"));
	printf("|O| ==> the dest2 by    strcpy is |%s|\n\n", strcpy(s, "How are you ?"));
	/* 
	 * strcmp 
	 */
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hello", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hello", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hello", "helloa"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hello", "helloa"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("helloa", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("helloa", "hello"));
	printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("hella", "hello"));
	printf("|O| ==> the return value of    strcmp is |%d|\n\n", strcmp("hella", "hello"));
	return (0);
}
