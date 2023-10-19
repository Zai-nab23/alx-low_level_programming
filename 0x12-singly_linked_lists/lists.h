#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc,ed string)
 * @len: length of string
 * @next: pointer to the next mode
 * Description: singly linked node
 */

typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;

size_t print_list(const list_t *h);



#endif
