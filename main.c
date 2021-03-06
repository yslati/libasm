/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:47:21 by yslati            #+#    #+#             */
/*   Updated: 2020/10/28 10:31:59 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

int			ft_strlen(char *str);
char		*ft_strcpy(char *dst, char *src);
int			ft_strcmp(char *s1, char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t nbyte);
ssize_t		ft_read(int fd, void *buf, size_t nbyte);
char		*ft_strdup(char *str);

int main()
{
	char	*str;
	char	dest[10];

	str = malloc(sizeof(char) * 5);
	int test = ft_read(20, dest, 10);
	//printf("%d", test);
	//printf("%d\n", ft_strlen(NULL));
	//printf("%d\n", ft_strlen("NULL"));
	//printf("%d\n", ft_strlen(""));

	//printf("%s|\n", ft_strcpy(dest, NULL));
	//printf("%s|\n", ft_strcpy(dest, "hello"));
	//printf("%s|\n", ft_strcpy(NULL, NULL));
	//printf("%s|\n", ft_strcpy(NULL, "hello"));

	//printf("MY: %d\n", ft_strcmp("abe", "abe"));
	//printf("O : %d\n",    strcmp("abe", "abe"));
	//printf("MY: %d\n", ft_strcmp("ab", "abea"));
	//printf("O : %d\n",    strcmp("ab", "abea"));
	//printf("MY: %d\n", ft_strcmp("abe", "ab"));
	//printf("O : %d\n",    strcmp("abe", "ab"));
	//printf("MY: %d\n", ft_strcmp("abex", NULL));
	//printf("O : %d\n",    strcmp("abex", NULL));   // segf
	//printf("MY: %d\n", ft_strcmp(NULL, "eve"));
	//printf("O : %d\n",    strcmp(NULL, "eve"));	 // segf
	//printf("%d\n", ft_strcmp("b", ""));
	//printf("%d\n",    strcmp("b", ""));
	//printf("|M| ==> the return value of ft_strcmp is |%d|\n", ft_strcmp("\xff\xff", "\xff"));
    //printf("|O| ==> the return value of    strcmp is |%d|\n\n",  strcmp("\xff\xff", "\xff"));

	//printf("%d\n", (int)ft_write(1, "NULL\n", 5));
	//printf("%d\n", (int)write(1, "NULL\n", 5));
	//printf("%d\n", (int)ft_write(1, NULL, 5));
	//printf("%d\n", (int)write(1, NULL, 5));
	//printf("%d\n", (int)ft_write(-1, "NULL\n", 5));
	//printf("%d\n", (int)write(-1, "NULL\n", 5));
	printf("%d\n", (int)ft_write(42, "bonjour", 7));
	printf("%d\n", (int)write(42, "bonjour", 7));

	//printf("%d | %s\n", (int)ft_read(1, str, 5), str);
	//printf("%d | %s\n", (int)read(1, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(-1, str, 5), str);
	//printf("%d | %s\n", (int)read(-1, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(42, str, 5), str);
	//printf("%d | %s\n", (int)read(42, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(1, NULL, 5), str);
	//printf("%d | %s\n", (int)read(1, NULL, 5), str);

	//printf("%s\n", ft_strdup("Hello"));
	//printf("%s\n", ft_strdup(NULL));
	//printf("%s\n", ft_strdup(""));
	
/* 	char        *s = NULL;
    int            bz;
    ssize_t        n;
    char        *s1="\xff";
    char        *s2="\xffh";

    bz = 40;

    //    write
    int fd1 = open("./test1", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
    int fd2 = open("./test2", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
    n = ft_write(fd1, s, bz);
    printf("\n|M| ==> the return value of ft_write is |%ld|\n", n);
    printf("errno = |%d|\n", errno);
    n =    write(fd2, s, bz);
    printf("\n|O| ==> the return value of    write is |%ld|\n", n);
    printf("errno = |%d|\n", errno);
    close(fd1);
    close(fd2);
	*/

	return (0);
}
