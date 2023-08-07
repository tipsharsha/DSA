#include "Node.c"
struct node * Search( struct node * p,int key)
{
    struct node * q;
    while(p!=NULL)
    {
        if (key ==p->data)
        {
            q->next = p->next;
            p->next = head;
            head = p;
        }
    }
}