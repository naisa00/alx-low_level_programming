#include "lists.h"

/**
 * free_list - program that frees all nodes of list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_list(list_t * head)
{
	list_t *node, *next_node;

	if(!head)
		return;
	nod =head;
	while (nod)
	{  
		next_nod = nod->next;
		free(nod->str);
		free(nod);
		nod = next_nod;
	}
}
