#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void insert();
void delet();
void display();
void count();
struct node
{
    int info;
    struct node *next;
} *start = NULL;
void main()
{
    int a;
    char ch = 'y';
    printf("\nWelcome To Program\n");
    while (ch == 'y' || ch == 'Y')
    {
        printf("\n ***LINKED LIST ***");
        printf("\n1.Insert ");
        printf("\n2.Delete ");
        printf("\n3.Traverse ");
        printf("\n4.Count Nodes ");
        printf("\nEnter Your Choice ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;

        case 3:
            display();
            break;
        case 4:
            count();
            break;
        default:
            printf("\nWrong Choice !!!");
        }
        printf("\nDo You Want To Continue ? (Y / N) ");
        fflush(stdin);
        scanf(" % c", &ch);
    }
    getch();
}
void insert()
{
    struct node *ptr;
    int item;
    printf("\nEnter Element ");
    scanf("% d", item);
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->info = item;
    if (start == NULL)
    {
        start = ptr;
        ptr->next = NULL;
    }
    else
    {
        ptr->next = start;
        start = ptr;
    }
}
void delet()
{
    struct node *temp;
    printf("\nDeleted Element Is: % d ", start->info);
    temp = start;
    start = start->next;
    free(temp);
}
void display()

{
    struct node *temp;
    if (start == NULL)
    {
        printf("\nNo Element In List !!!");
    }
    else
    {
        printf("\nElements In List Are: ");
        temp = start;
        while (temp != NULL)
        {
            printf("\t % d ", temp->info);
            temp = temp->next;
        }
    }
}
void count()
{
    int c = 0;
    struct node *current;
    current = start;
    while (current != NULL)
    {
        c++;
        current = current ->next;
    }
    printf("\nTotal Number Of Nodes Are : % d",c);
}