#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct planets {
   char *planet_Name;
    float appr_weight;
    float dimensions;
    struct planets *Next;
};
/// Add object at last positions.
void add_planet(struct  planets **first, float app_weight,char name[],float dia)
{
    struct planets *newPlanet =NULL;
    newPlanet =(struct planets*) malloc(sizeof(struct planets));
    newPlanet->planet_Name=name;
    newPlanet->appr_weight= app_weight;
    newPlanet->dimensions=dia;
    newPlanet->Next=NULL;
    if(NULL == *first)
    {
        *first = newPlanet;
    }else
    {

        struct planets *temp = *first;
         while(temp->Next != NULL){
            temp= temp->Next;
        }
        temp->Next= newPlanet;

    }

}
/// sorting by planet approximate weight. bubble sort algorithm.
void sortByWeight(struct planets **first)
{
    int swapped = 0;
    struct planets *ptr1;
    struct planets *ptr2=NULL;
    if(*first == NULL){
        printf("planet list is empty.");
        return;
    }

 do
    {
        swapped = 0;
        ptr1 = *first;

        while (ptr1->Next != ptr2)
        {
            if (ptr1->appr_weight > ptr1->Next->appr_weight)
            {
                swap(ptr1, ptr1->Next);
                swapped = 1;
            }
            ptr1 = ptr1->Next;
        }
        ptr2 = ptr1;
    }
    while (swapped);
}

/// sorting by planet Dimension. bubble sort algorithm.
void sortByDia(struct planets **first)
{
    int swapped = 0;
    struct planets *ptr1;
    struct planets *ptr2=NULL;
    if(*first == NULL){
        printf("planet list is empty.");
        return;
    }
 do
    {
        swapped = 0;
        ptr1 = *first;

        while (ptr1->Next != ptr2)
        {
            if (ptr1->dimensions > ptr1->Next->dimensions)
            {
                swap(ptr1, ptr1->Next);
                swapped = 1;
            }
            ptr1 = ptr1->Next;
        }
        ptr2 = ptr1;
    }
    while (swapped);
}
// swapping  data between two objects;
void swap(struct planets *a, struct planets *b)
{
    struct planets *c = a;

    float  a1 = a->appr_weight;
    char *a2 = a->planet_Name;
    float a3 = a->dimensions;
    a->appr_weight= b->appr_weight;
    b->appr_weight= a1;
    a->planet_Name=b->planet_Name;
    b->planet_Name= a2;
    a->dimensions=b->dimensions;
    b->dimensions=a3;
}

void show_planets(struct planets **first){
    if(NULL == *first){
        printf("Planets are empty.");
    }
    else{
        struct planets *temp = *first;
        printf("\tName \t\t Weight \t\t Dimensions\n");
        while(temp != NULL){
            printf("[%10s]\t[%20.2f]\t[%20.3f] \n",temp->planet_Name,temp->appr_weight,temp->dimensions);
            temp= temp->Next;
        }
    }
    printf("\n");
}

int main(void)
{
    struct planets *head =NULL;

    add_planet(&head,20,"Earth",1000);
    add_planet(&head,10,"Mars",500);
    add_planet(&head,15,"Jupiter",250);
    add_planet(&head,10,"Mercury",250);
    add_planet(&head,13,"Saturn",250);
    add_planet(&head,9,"Venus",100);
    add_planet(&head,8,"Uranus",250);
    add_planet(&head,1,"Neptune",250);
    printf("===========Before all operations=========\n");
    show_planets(&head);

    printf("==========After sorted by approximate weight of planet.==========\n\n");
    sortByWeight(&head);
    show_planets(&head);

    printf("==========After sorted by Dimension of planet.=========\n\n");
    sortByDia(&head);
    show_planets(&head);
    return (0);
}
