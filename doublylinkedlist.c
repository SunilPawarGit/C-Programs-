#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
    int num;
    struct Node *prev;
    struct Node *next;
};

void addNode(struct Node **first,int num,char msg[])
{
    struct Node *NewN =NULL;
    NewN = (struct Node*) malloc(sizeof(struct Node));
    NewN->num=num;
    NewN->next=NULL;
    NewN->prev=NULL;
    if(*first == NULL){
        *first = NewN;
        return;
    }

    struct Node *temp=*first;
    if(msg == "at-last"){
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next=NewN;
        NewN->prev=temp;
        return;
    }else{
        NewN->next=temp;
        temp->prev=NewN;
        *first=NewN;
        return;
    }

}
void show_all(struct Node **first){
    if(NULL == *first){
        printf("Nodes are empty.");
    }
    else{
        struct Node *temp = *first;
        printf("\tName \t\t Weight \t\t Dimensions\n");
        while(temp != NULL){
            printf("[%d]\n",temp->num);
            temp= temp->next;
        }
    }
    printf("\n");
}

int main(void)
{
    struct Node* head=NULL;
    addNode(&head,5,"at-last");
    addNode(&head,6,"at");
    show_all(&head);
    return 0;
}
