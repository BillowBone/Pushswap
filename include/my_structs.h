/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef _MY_STRUCTS_
#define _MY_STRUCTS_
typedef struct Numbers Numbers;
struct Numbers
{
	int nb;
	Numbers *next;
};

typedef struct List List;
struct List
{
	Numbers *first;
};
#endif /* _MY_STRUCTS_ */
