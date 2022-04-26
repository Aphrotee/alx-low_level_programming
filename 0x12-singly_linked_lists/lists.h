#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
<<<<<<< HEAD
size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
=======
extern size_t print_list(const list_t *h);
extern int _putchar(char c);
>>>>>>> 7cb96f6b7ea2a23acd7dd14ca230850b36015f5a
#endif
