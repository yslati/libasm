/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:37:00 by yslati            #+#    #+#             */
/*   Updated: 2020/10/17 12:09:35 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
    void			*data;
    struct s_list	*next;
}				t_list;
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
//void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int		cmp(void *s1, void *s2)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	i = 0;
	b1 = (unsigned char*)s1;
	b2 = (unsigned char*)s2;
	while (b1[i] || b2[i])
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

int     main()
{
	t_list *list1;
	t_list *list2;
	t_list *list3;
	t_list *list4;

	list1 = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	list3 = malloc(sizeof(t_list));
	list4 = malloc(sizeof(t_list));

	list1->data = "helloss";
	list2->data = "aaa";
	list3->data = "bye";
	list4->data = "new";
	
	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;

	printf("%s |> %s |> %s\n", list1->data, list1->next->data, list1->next->next->data);
	ft_list_sort(&list1, &cmp);
	printf("\n%s |> %s |> %s\n", list1->data, list1->next->data, list1->next->next->data);
	
	//printf("\nBefore remove size: %d\n", ft_list_size(list1));
	//ft_list_remove_if(&list1, "hello", &cmp);
	//printf("After remove size: %d\n", ft_list_size(list1));
    
	//printf("Before %s\n", list1->data);
	// printf("%p\n", list1);
	// printf("%p\n", list1->next);
	// printf("%p\n", list2->next);
	// printf("%p\n", list3->next);
	// printf("%p\n", list4->next);
	//ft_list_push_front(&list1, list4);
	//printf("After %s\n", list1->data);
}

/* 0x7fa951402700 */
/* 0x7fa6024026e0 */
