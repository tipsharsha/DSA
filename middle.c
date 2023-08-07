#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
void printList();
void insert(int r2d2)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = r2d2;
    link->link = head;
    head = link;
}
int printMiddle()
{
    struct node *fast = head;
    struct node *slow = head;
    while (fast != NULL && fast->link != NULL)
    {
        fast = (fast->link)->link;
        slow = (slow->link);
    }
    printf("%d", slow->data);
}
void deleten()
{
    printf("\nDELETING VALUES\n");
    printf("Enter the node you want to delete : ");
    int t;
    scanf("%d", &t);
    struct node *temp3;
    temp3 = malloc(sizeof(struct node));
    temp3 = head;
    for (int j = 0; j < t-2 ; j++)
    {
        temp3 = temp3->link;
    }
    temp3->link = (temp3->link)->link;
}

void main()
{
    for (int i = 10; i > 0; i--)
        insert(i);
    printMiddle();
        struct node *p = head;
    while (p != NULL)
    {
        printf("%d =>", p->data);
        p = p->link;
    }

    deleten();
    p = head;
    while (p != NULL)
    {
        printf("%d =>", p->data);
        p = p->link;
    }

}