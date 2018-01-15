/*
** EPITECH PROJECT, 2017
** my_pushswap.c
** File description:
** Here is the code for the my_pushswap project
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

int list_len(List *list)
{
	int i = 0;
	Numbers *current = malloc(sizeof(*current));

	current = list->first;
	while (current != NULL) {
		current = current->next;
		i = i + 1;
	}
	return (i);
}

void littler(List *list, List *list2)
{
	int littler = 0;
	int i = 0;
	int j = list_len(list);

	littler = browser(list);
	while (i < j) {
		if (list->first->nb == littler) {
			pb(list,list2);
			my_putstr("pb ");
		}
		ra(list);
		my_putstr("ra ");
		i = i + 1;
	}
	rra(list);
	my_putstr("rra ");
}

void put_la(List *list, List *list2)
{
	int len = list_len(list2);
	int i = 0;

	while (i < len) {
		pa(list,list2);
		my_putstr("pa ");
		i = i + 1;
	}
	my_putchar('\b');
}

int is_sorted(List *list)
{
	Numbers *current = malloc(sizeof(*current));

	current = list->first;
	while (current->next != NULL) {
		if (current->nb > current->next->nb)
			return (0);
		current = current->next;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	List *list = initialize();
	List *list2 = initialize();
	int i = argc - 1;

	if ((argc > 1300) || (argc == 1))
		return (84);
	while (i > 0) {
		insertion(list,my_getnbr(argv[i]));
		i = i - 1;
	}
	if (is_sorted(list) == 1)
		return (0);
	gestion(list,list2);
	list = initialize();
	put_la(list,list2);
	my_putchar('\n');
	return (0);
}
