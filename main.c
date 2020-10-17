/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:47:21 by yslati            #+#    #+#             */
/*   Updated: 2020/10/17 09:40:43 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

	//printf("%d\n", ft_strcmp("abe", "abe"));
	//printf("%d\n", ft_strcmp("abex", "abea"));
	//printf("%d\n", ft_strcmp("abex", NULL));
	//printf("%d\n", ft_strcmp(NULL, "eve"));
	//printf("%d\n", ft_strcmp("b", ""));        // problem
	//printf("%d\n",    strcmp("b", ""));        // problem

	//printf("%d\n", (int)ft_write(1, "NULL\n", 5));
	//printf("%d\n", (int)write(1, "NULL\n", 5));
	//printf("%d\n", (int)ft_write(1, NULL, 5));
	//printf("%d\n", (int)write(1, NULL, 5));
	//printf("%d\n", (int)ft_write(-1, "NULL\n", 5));
	//printf("%d\n", (int)write(-1, "NULL\n", 5));
	//printf("%d\n", (int)ft_write(42, "NULL\n", 5));
	//printf("%d\n", (int)write(42, "NULL\n", 5));

	//printf("%d | %s\n", (int)ft_read(1, str, 5), str);
	//printf("%d | %s\n", (int)read(1, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(-1, str, 5), str);
	//printf("%d | %s\n", (int)read(-1, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(42, str, 5), str);
	//printf("%d | %s\n", (int)read(42, str, 5), str);
	//printf("%d | %s\n", (int)ft_read(1, NULL, 5), str);
	//printf("%d | %s\n", (int)read(1, NULL, 5), str);

	printf("%s\n", ft_strdup("Hello"));
	printf("%s\n", ft_strdup(NULL));
	printf("%s\n", ft_strdup(""));

	return (0);
}
