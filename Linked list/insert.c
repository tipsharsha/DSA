#include "Node.c"
void insert(struct node* p,int x,int index)
{
    struct node* q =p->next;
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    if(index!=0)
        {
            for(int i = index;i>1&&p;i--)
            {
                p = p->next;
            }
            t->next = p->next;
            p->next = t;
        }
    else
    {
        t->next =p;
        p = t;
    }
}
void Insert_last(int x)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if (head == NULL)
    {
        head = t;
        tail = t;
    }
    else
    {
        tail ->next = t;
        tail = t;
    }

}
