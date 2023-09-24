#include "lists.h"

/**
 *str_len - program that returns the length of a string
 *@s: the string whose length to check
 *
 *Return: integer length of string
 */
int str_len (char *s)
{       
        int n = 0;

        if (!s)
                return(0);
        while(*s++)
                n++;
        return (n);
}       

/**
 * print_list - program that prints a linked lists
 *@h: pointer to first node
 *
 * return: size of list printed
 */
size_t print_list(const list_t *h)
 
{
        size_t n = 0;
        
        while (h)
        {
                printf("[%d] %s\n", str_len(h->str), h->str ? h->str :"(nil)");
                h = h->next;
                        n++;
        }
        return (n);
}
