/*
** EPITECH PROJECT, 2017
** doublerotate_abr.c
** File description:
** Here are the rra, rrb & rrr functions for the my_pushswap project
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

void rra(List *list)
{
	int nb = 0;
	Numbers *current = malloc(sizeof(*current));

	current = list->first;
	if ((list->first != NULL) && (list->first->next != NULL)) {
		while (current->next != NULL) {
			current = current->next;
		}
		nb = current->nb;
		insertion(list,nb);
		delete_end(list);
	}
}

void rrb(List *list)
{
	int nb = 0;
	Numbers *current = malloc(sizeof(*current));

	current = list->first;
	if ((list->first != NULL) && (list->first->next != NULL)) {
		while (current->next != NULL) {
			current = current->next;
		}
		nb = current->nb;
		insertion(list,nb);
		delete_end(list);
	}
}

void rrr(List *list, List *list2)
{
	rra(list);
	rrb(list2);
}
