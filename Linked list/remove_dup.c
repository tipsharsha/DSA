#include "Node.c"
int delete_dup(struct node* p)
{
    while (p!=0)
    {
        struct node*q = p->next;
        if(p->data!=q->data)
        {
            p=q;
            q = q->next;
        }
        else{
            p->next= q->next;
            free(q);
            q = p->next;
            
        }
        p=p->next;
    }
}