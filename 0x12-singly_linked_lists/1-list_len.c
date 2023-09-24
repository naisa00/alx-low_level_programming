#include "lists.h"

/**
 * list_len - program that determines length of linked list
 * @h: pointer to first node.
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
        size_t n = 0;
        while (h)
        {
                h = h->next;
                n++;
        }
        return (n);
}
