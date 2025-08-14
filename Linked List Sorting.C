 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int No;
    struct Node *Next;
};

  /// insert sort
void InsertSort(int num ,struct Node **first)
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
        struct Node *temp2=NULL;
        if( temp->Next == NULL)
        {
            if(Newn->No <= temp->No)
            {
                temp ->Next = Newn;
            }
            else {
                temp2 = temp;
                temp = Newn;
                Newn->Next=temp2;
            }
        }
        else{
             while(temp->Next != NULL)
            {

                if(temp->No <= Newn->No )
                {
                        temp->Next=Newn;
                        Newn->Next= temp2;
                }
                temp2=temp->Next;
                temp=temp->Next;

            }

        }



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
      /// Insert Sort Location in linked List
    InsertSort(22,&Head);
    InsertSort(12,&Head);
   // InsertSort(25,&Head);
    /// Display Function
    DisplayLL(Head);


    getch();
    return 0;

}
