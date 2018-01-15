/*
** EPITECH PROJECT, 2017
** rotate_abr.c
** File description:
** Functions rotate a rotate b and rotate r for the pushswap project
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

void ra(List *list)
{
	int nb = 0;
	Numbers *current = malloc(sizeof(*current));
	Numbers *current2 = malloc(sizeof(*current2));

	current = list->first;
	if ((list->first != NULL) && (list->first->next != NULL)) {
		nb = list->first->nb;
		delete_begin(list);
		while (current->next != NULL) {
			current = current->next;
		}
		current2->nb = nb;
		current2->next = current->next;
		current->next = current2;
	}
}

void rb(List *list)
{
	int nb = 0;
	Numbers *current = malloc(sizeof(*current));
	Numbers *current2 = malloc(sizeof(*current2));

	current = list->first;
	if ((list->first != NULL) && (list->first->next != NULL)) {
		nb = list->first->nb;
		delete_begin(list);
		while (current->next != NULL) {
			current = current->next;
		}
		current2->nb = nb;
		current2->next = current->next;
		current->next = current2;
	}
}

void rr(List *list, List *list2)
{
	ra(list);
	rb(list2);
}
