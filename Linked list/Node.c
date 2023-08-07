#include "stdio.h"
#include "stdlib.h"
struct node
{
    int data;//2 Bytes
    struct node* next;//2 Bytes pointer also uses 2 bytes
};
// Total 4 bytes 
//Creation of node 
struct node *p;
int main()
{
p = (struct node*)malloc(sizeof(struct node));
p->data = 19;
p->next = 0;
}