struct node
{
    int data;//2 Bytes
    struct node* next;//2 Bytes pointer also uses 2 bytes
};
int main()
{
    struct node* q,*p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = 10;
    q = p->next;
    if (q==0)
    {
        printf("It is not pointing to any node");
    }
}