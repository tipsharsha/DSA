#define NULL 0
//Stack uses n+1 function calls for n elements in linked list
struct node
{
    int data;//2 Bytes
    struct node* next;//2 Bytes pointer also uses 2 bytes
};
void display(struct node *p)
{
    if(p!= NULL)
    {
        printf("%d",p->data);
        display(p->next);
    }
}//Displays from head otherwise we can switch to get ulta