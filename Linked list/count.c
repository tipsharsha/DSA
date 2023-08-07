struct node
{
    int data;//2 Bytes
    struct node* next;//2 Bytes pointer also uses 2 bytes
};
int count(struct node* p)
{
    int n =0;
    while (p!=0)
    {
        n +=1;
        p->next;
    }
    return n;
}