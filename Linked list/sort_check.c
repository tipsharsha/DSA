#include "Node.c"
int sort_check(struct node*p)
{

    while(p!=0)
    {
        int x = p->data;
        if (x<p->next->data)
        {p = p->next;}
        else{
            return -1;
        }   
    
    }
    return 1;
}