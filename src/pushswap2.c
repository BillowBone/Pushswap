/*
** EPITECH PROJECT, 2017
** pushswap2.c
** File description:
** Here is the second part of my code for the pushswap project
*/

#include "my_structs.h"
#include <stdlib.h>
#include "include.h"

int browser(List *list)
{
	int littler = 0;
	int i = 0;
	int j = list_len(list);

	littler = list->first->nb;
	while (i < j) {
		ra(list);
		if(list->first->nb <= littler)
			littler = list->first->nb;
		i = i + 1;
	}
	return (littler);
}

void gestion(List *list, List *list2)
{
	int i = 0;

	while (i < (list_len(list))) {
		littler(list,list2);
		i = i + 1;
	}
}
