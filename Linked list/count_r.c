#include "Node.c"
int count_r(struct node* p)
{
    if (p==0)
    {
        return;
    }
    else
    return count(p->next)+1;
    //number of calls are n+1 
    //Space complexity
}