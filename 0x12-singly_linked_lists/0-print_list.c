#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 * Return: the number of nodes
 */

 size_t print_list(const list_t *h)
 {
     size_t number_of_nodes;

     number_of_nodes = 0;
     while(h != NULL)
     {
         if(h -> str == NULL)
         {
             printf("[%d] %s\n",0,"(nill)");
         }
         else
         {
             printf("[%d] %s\n",h -> len, h -> str);
         }
         h = h -> next;
         number_of_nodes++;
     }
     return(number_of_nodes);
 }
