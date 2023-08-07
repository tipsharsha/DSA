#include "Node.c"
int Add(struct node * p)
{
    int sum=0;
    while (p!=0)
    {
        sum += p->data;
    }
    return sum;
}
int Add_r(struct node *p)
{
    if (p==0)
    {
        return 0;
    }
    else 
    {
        return Add(p->next)+p->data;
    }
}