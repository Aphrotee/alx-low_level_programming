#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
extern int _putchar(char c);
extern size_t print_listint(const listint_t *h);
extern size_t listint_len(const listint_t *h);
extern listint_t *add_nodeint(listint_t **head, const int n);
extern listint_t *add_nodeint_end(listint_t **head, const int n);
extern void free_listint(listint_t *head);
extern void free_listint2(listint_t **head);
extern int pop_listint(listint_t **head);
extern listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
extern int sum_listint(listint_t *head);
extern listint_t *insert_nodeint_at_index(listint_t **head,
					unsigned int idx, int n);
extern int delete_nodeint_at_index(listint_t **head, unsigned int index);
extern listint_t *reverse_listint(listint_t **head);
extern size_t print_listint_safe(const listint_t *head);
extern size_t free_listint_safe(listint_t **h);
extern listint_t *find_listint_loop(listint_t *head);
#endif
