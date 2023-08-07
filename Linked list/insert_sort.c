#include "Node.c"
void insert_sort(int x)
{
    p = head;
    struct node* q =NULL;
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(head == NULL)
    {head = t;}
    else
    {while(p&&p->data<x)
    {
        q=p;
        p=p->next;
    }
    if (p==head)
    {
        t->next = head;
        head = t;
    }
    else{
        t->next = q->next;
        q->next = t;
    }
    }
}