#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int No;
    struct Node *Next;

};

///Insert At First

void InsertFirst(int num, struct Node **src)
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

 /// Insert At Last

void InsertLast(int num,struct Node **first)
{
    struct Node *Newn=NULL;
    Newn=(struct Node*)malloc(sizeof(struct Node));

    Newn->No=num;
    Newn->Next=NULL;

    if(NULL==*first)
    {
        *first= Newn;
    }
    else
    {
        struct Node *temp=*first;
        while(temp->Next != NULL)
        {
            temp=temp->Next;
        }
        temp->Next=Newn;
    }
}

        /// Delete At First

void DeleteAtFirst(struct Node **first)
{
    if(*first == NULL)
    {
        printf("There Has No Element.");
    }
    else
    {
        struct Node *temp=*first;
        *first=temp->Next;
        free(temp);
    }
}

    ///   Delete At Last

void DeleteAtLast(struct Node **first)
{
    if(*first == NULL)
    {
        printf("There Has No Element.");
    }
    else
    {
        struct Node *temp = *first;
        while((temp->Next)->Next != NULL)
        {
            temp=temp->Next;
        }
        free(temp->Next);/// First Next Free And Later Next Pointer Null Making

        temp->Next=NULL;

    }
}

/// Count Function

int CountNode(struct Node *first)
{
    int cnt =0;
    if (NULL != first)
    {
        while(first != NULL)
        {
            cnt++;
            first=first->Next;
        }
    }
    return cnt;
}


///         Insert At Position

int InsertAtPos(int Num,struct Node **first,int Pose)
{
    int Cnt=CountNode(*first); /// Calling internally count function
    if(Pose <=0 || Pose > Cnt+1)
    {
        printf("You Cannot Insert That Position");
        return 0;
    }
    if (Pose == 1)
    {
        InsertFirst(Num,first);
    }
    else if(Pose == Cnt)
    {
        InsertLast(Num,first);
    }
    else
    {
        struct Node *Newn=NULL;
        Newn=(struct Node*)malloc(sizeof(struct Node));

        Newn->No=Num;
        Newn->Next=NULL;
        struct Node *temp=*first;
        while(Pose > 2)
        {
            temp=temp->Next;
            Pose--;
        }
        Newn->Next=temp->Next;
        temp->Next=Newn;
    }
}

 /// Display Function

void DisplayLL(struct Node *first)
{
    if(NULL==first)
    {
        printf("Linked List Are Already Empty.");
        return;
    }

    printf(" \n Linked List Are..\n\n");

    while(first != NULL)
    {
        printf("| %d | =>",first->No);
        first=first->Next;
    }
}

int main()
{
    struct Node *Head=NULL;

    /// Insert At First  Function

    InsertFirst(20,&Head);
    InsertFirst(10,&Head);

    /// Insert At Last  Function

    InsertLast(11,&Head);
    InsertLast(21,&Head);
    InsertLast(31,&Head);
    InsertLast(41,&Head);

    /// Display Function


    DisplayLL(Head);

    /// Delete First

    DeleteAtFirst(&Head);

    DisplayLL(Head);

    /// Delete Last

    DeleteAtLast(&Head);

    DisplayLL(Head);

    /// Insert At Position

    InsertAtPos(505,&Head,3);

    DisplayLL(Head);

    /// Count No Of Nodes Function

    printf("\n In Linked List No. Of Nodes Is => %d",CountNode(Head));

    getch();
    return 0;
}

