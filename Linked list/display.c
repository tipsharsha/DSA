struct node
{
    int data;//2 Bytes
    struct node* next;//2 Bytes pointer also uses 2 bytes
};
void display(struct node *p){
    while (p != NULL)
    {
        printf("%d",p->data);
        p = p->next;
    }
}