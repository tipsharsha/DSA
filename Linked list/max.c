#include "Node.c"
#define MIN_INT -3232
int max(struct node * p)
{
    int x = MIN_INT;
    while(p!=0)
    {
        if (x<p->data)
        {
            x = p->data;
        }
        p = p->next;
    }
}
int max_r(struct node *p)
{
    int x =0;
    if(p==0)
    {
        return MIN_INT;
    }
    else{
        x = max(p->next);
        return x >p->data ? x:p->data;
    }
}