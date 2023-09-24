#include "lists.h"

/**
 *add_node - program that adds anode to the start of the list
 * @head : address of a pointer to the head node
 * @str : str field of the node
 *
 * Return: size of the list printed
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new_h = malloc(sizeof (list_t));

        if (!head || !new_h)
                return (NULL);
        if(str)
        {
              new_h->str = strdup(str);
              if (!new_h->str)
              {
                        free(new_h);
                        return (NULL);
                }
                new_h->len = str_len(new_h->str);
        }

        new_h->next = *head;
        *head = new_h;
        return (new_h);
}
