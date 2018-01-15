/*
** EPITECH PROJECT, 2017
** swap_abc.c
** File description:
** Functions sa, sb & sc
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

void sa(List *list)
{
	int nb = 0;

	if (list->first->next != NULL) {
		nb = list->first->nb;
		list->first->nb = list->first->next->nb;
		list->first->next->nb = nb;
	}
}

void sb(List *list)
{
	int nb = 0;

	if (list->first->next != NULL) {
		nb = list->first->nb;
		list->first->nb = list->first->next->nb;
		list->first->next->nb = nb;
	}
}

void sc(List *list, List *list2)
{
	sa(list);
	sb(list2);
}
