/*
** EPITECH PROJECT, 2017
** pa_pb.c
** File description:
** Here are the pa and pb functions that takes the first element of a list and puts it at the beginning of the other one
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

void pa(List *list, List *list2)
{
	int nb = 0;

	if (list2->first != NULL) {
		nb = list2->first->nb;
		delete_begin(list2);
		insertion(list,nb);
	}
}

void pb(List *list, List *list2)
{
	int nb = 0;

	if (list->first != NULL) {
		nb = list->first->nb;
		delete_begin(list);
		insertion(list2,nb);
	}
}
