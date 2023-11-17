#include "lists.h"

/**
 * *add_node_end - adds node at the end of list_t list
 * @head: head of node
 * @str: string to store
 * Return: address of new node or NULL if failed
 */

 list_t *add_node_end(list_t **head, const char *str)
 {
     list_t *newnode, *temp;
     unsigned int a, count = 0;

     newnode = malloc(sizeof(list_t));
     if(newnode == NULL)
        return (NULL);
     newnode->str = strdup(str);
     for(a = 0; str[a] != '\0'; a++)
        count++;
     newnode->len = count;
     newnode->next = NULL;
     temp = *head;
     if(temp == NULL)
        *head = newnode;
     else
     {
         while(temp->next != NULL)
            temp = temp->next;
         temp->next = newnode;
     }
     return (*head);
 }
