/*
** EPITECH PROJECT, 2017
** structs.c
** File description:
** Here are all my functions that initialize, delete, display, delete all etc for my structures
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

List *initialize(void)
{
	List *list = malloc(sizeof(*list));
	Numbers *numbers = malloc(sizeof(*numbers));

	if (list == NULL || numbers == NULL)
		return (84);
	numbers->nb = 0;
	numbers->next = NULL;
	list->first = numbers;
	return (list);
}

int insertion(List *list, int new_nb)
{
	Numbers *nb = malloc(sizeof(*nb));

	if (list == NULL || nb == NULL)
		return (84);
	if ((list->first->next == NULL) && (list->first->nb == 0)) {
		list->first->nb = new_nb;
	} else {
		nb->nb = new_nb;
		nb->next = list->first;
		list->first = nb;
	}
	return (0);
}

int delete_begin(List *list)
{
	if (list == NULL)
		return (84);
	if (list->first != NULL) {
		Numbers *to_delete = list->first;
		list->first = list->first->next;
		free(to_delete);
	}
	return (0);
}

int delete_end(List *list)
{
	Numbers *current = malloc(sizeof(*current));
	Numbers *to_delete = malloc(sizeof(*to_delete));

	current = list->first;
	if (list == NULL)
		return (84);
	while (current->next->next != NULL) {
		current = current->next;
	}
	to_delete = current->next->next;
	current->next = NULL;
	free(to_delete);
	return (0);
}

int display_list(List *list)
{
	if (list == NULL)
		return (84);
	Numbers *current = list->first;
	while (current != NULL) {
		my_put_nbr(current->nb);
		my_putchar(' ');
		current = current->next;
	}
	my_putchar('\b');
	return (0);
}
