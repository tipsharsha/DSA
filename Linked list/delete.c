#include "Node.c"
void delete(struct node * p,int index)
{
    if (index ==0)
    {
        struct node* q = p;
        p = p->next;
        int  x = q->data;
        free(q);
    }
    else if (index>0)
    {
        struct node* q = p;
        for(int i = 0;i<index;i++)
        {
            q= p;
            p = p->next;
        }
        q->next = p->next;
        int x = p->data;
        free(p);
    }
}