/*
** EPITECH PROJECT, 2017
** include.h
** File description:
** include.h
*/

#ifndef _MY_H_
#define _MY_H_
#include "my_structs.h"

void rra(List *list);
void rrb(List *list);
void rrr(List *list, List *list2);
int my_getnbr(char const *str);
int negatif(char const *str, int i);
int appliquenegatif(int i, int neg);
int fin(char const *str, int i);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
void pa(List *list, List *list2);
void pb(List *list, List *list2);
int browser(List *list);
void gestion(List *list, List *list2);
int list_len(List *list);
void littler(List *list, List *list2);
void put_la(List *list, List *list2);
int is_sorted(List *list);
void ra(List *list);
void rb(List *list);
void rr(List *list, List *list2);
List *initialize(void);
int insertion(List *list, int new_nb);
int delete_begin(List *list);
int delete_end(List *list);
int display_list(List *list);
void sa(List *list);
void sb(List *list);
void sc(List *list, List *list2);
#endif /* _MY_H_ */
