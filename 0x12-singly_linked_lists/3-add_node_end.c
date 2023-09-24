#include "lists.h"

/**
 * add_node_end - program that adds a node to the end of the list.
 * @head: address of pointer to the head node.
 * @str: str field of the node.
 *
 * Return:size of list printed
 */
list_t *add_node_end(list_t **head, const char *str)
{       
        list_t *new_nod = malloc (sizeof(list_t));
        list_t *new_nod  = *head;
        
        if (!head || new_nod)
                return(NULL);
	if (str)
	{
	        new_nod->str = strdup(str);
		if (!new_nod->str)
        {
	         free(new_nod);
		 return (NULL);
         }
		new_nod->len = str_len(new_nod->str);

	}
	if (nod)
	{
	        while (nod->next)
		        nod = nod->next;
		nod->next = new_nod;
	}
	else
	        *head = new_nod;
		return (new_nod);
}
