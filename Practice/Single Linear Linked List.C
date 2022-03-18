#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int No;
    struct Node *Next;
};
void InsertLL(int num, struct Node **src)
{
    struct Node *Newn=NULL;
    Newn=(struct Node*)malloc(sizeof(struct Node));
    Newn->No=num;
    Newn->Next=NULL;
    if(NULL==*src)
    {
        *src=Newn;
    }
    else
    {
        Newn->Next=*src;
        *src=Newn;
    }
}

void DisplayLL(struct Node *first)
{
    if(NULL==first)
    {
        printf("Linked List Are Already Empty.");
        return;
    }
    printf("Linked List Are..\n\n");
    while(first != NULL)
    {
        printf("| %d | =>",first->No);
        first=first->Next;
    }
}
int main()
{
    struct Node *Head=NULL;

    /// Insert Function

    InsertLL(20,&Head);
    InsertLL(10,&Head);

/// Display Function
    DisplayLL(Head);

    getch();
    return 0;
}
