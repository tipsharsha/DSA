//Linear search and Binary Search
#include "Node.c"
struct node* Linear_search(struct node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
        {
            return p;
        }
        p= p->next;
    }
}
struct node* Linear_search(struct node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    else if(key==p->data)
    {
        return p;
    }
    else{
        return Linear_search(p->next,key);
    }
}