#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int value;
    struct node *next;
};
int main() 
{
    struct node *head;
    head=malloc(sizeof(struct node));
    struct node *temp;
    temp=malloc(sizeof(struct node));
    printf("Enter the number of terms : ");
    int n;
    scanf("%d",&n);
    printf("Enter the value of node 1 : ");
    scanf("%d",&head->value);
    head->next=NULL;
    temp=head;
    for(int i=2;i<=n;i++)
    {
        struct node *a;
        a=malloc(sizeof(struct node));
        printf("Enter the value of node %d :",i);
        scanf("%d",&a->value);
        temp->next=a;
        a->next=NULL;
        temp=temp->next;
    }
    printf("\nPRINTING VALUS\n");
    struct node *temp2;
    temp2=malloc(sizeof(struct node));
    temp2=head;
    for(int j=0;j<n;j++)
    {
        printf("%d => ",temp2->value);
        temp2=temp2->next;
    }
    printf("\nDELETING VALUES\n");
    printf("Enter the node you want to delete : ");
    int t;
    scanf("%d",&t);
    struct node *temp3;
    temp3=malloc(sizeof(struct node));
    temp3=head;
    for(int j=0;j<t-1;j++)
    {
        temp3=temp3->next;
    }
    temp3 = (temp3->next)->next;
    
    
    printf("\nPRINTING VALUS\n");
    struct node *temp4;
    temp4=malloc(sizeof(struct node));
    temp4=head;
    for(int j=0;j<n;j++)
    {
        printf("%d => ",temp4->value);
        temp4=temp4->next;
    }

    return 0;
}