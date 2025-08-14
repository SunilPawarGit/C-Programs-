#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<mysql.h>
struct Current
{
    float Acc_Bal;
    char msg[20];
    char FName[20];
};
struct Saving
{
    float Acc_Bala;
    char msg[20];
};
struct Loan
{
    float Amount;
    int Year;
    char Loan_Type[20];
};

struct Customer
{
    int Acc_No;
    char Acc_Own_Name[20];
    float Mob_No;
    char City[20];
    char Acc_Type[20];
    struct Current *c;
    struct Saving *s;
    struct Loan *l;
    struct Customer *NXT;
};


void Add_Customer(struct Customer **Src)
{
    int No=0;
    struct Customer *Newn=NULL;
    Newn=(struct Customer*)malloc(sizeof(struct Customer));
    printf("\n Enter Account Number : ");
    scanf("%d",&Newn->Acc_No);
    printf("\n Enter Account Holder Name : ");
    scanf(" %[^\n]",&Newn->Acc_Own_Name);
    printf("\n Enter Mobile Number : ");
    scanf("%f",&Newn->Mob_No);
    printf("\n Enter City : ");
    scanf("%s",&Newn->City);
    printf("\n Enter Account Type : ");
    scanf("%s",&Newn->Acc_Type);
    /////////////////////////////////////
    Newn->c=NULL;
    Newn->s=NULL;
    Newn->l=NULL;
    ////////////////////////////////////
re:
    printf("\n Enter Choice \n 1. Current\n 2. Saving \n 3. Loan \n Enter :");
    scanf(" %d",&No);
    switch(No)
    {
    case 1:
        Newn->c=(struct Current*)malloc(sizeof(struct Current));
        printf("\n Enter How Many Balance :");
        scanf(" %f",&Newn->c->Acc_Bal);
        printf("\n Enter Message :");
        scanf(" %[^\n]",&Newn->c->msg);
        printf("\n Enter Firm Name :");
        scanf(" %[^\n]",&Newn->c->FName);
        break;
    case 2:
        Newn->s=(struct Saving*)malloc(sizeof(struct Saving));
        printf("\n Enter How Many Balance :");
        scanf("%f",&Newn->s->Acc_Bala);
        printf("\n Enter Message :");
        scanf(" %[^\n]",&Newn->s->msg);
        break;
    case 3:
        Newn->l=(struct Loan*)malloc(sizeof(struct Loan));
        printf("\n Enter How Many Amount For Loan :");
        scanf("%f",&Newn->l->Amount);
        printf("\n Enter Year :");
        scanf("%d",&Newn->l->Year);
        printf("\n Enter Loan Type :");
        scanf(" %[^\n]",&Newn->l->Loan_Type);
        break;
    default:
        printf("\n Please Choose Correct Account Type Which you Entered :\n");
        goto re;
    }
    Newn->NXT=NULL;
    /// Linking Nodes
    if(NULL==*Src)
    {
        *Src= Newn;
    }
    else
    {
        struct Customer *temp=*Src;
        while(temp->NXT != NULL)
        {
            temp=temp->NXT;
        }
        temp->NXT=Newn;
    }
}
// Display All Account Holders.
void DisplayL(struct Customer *Src)
{
    if(NULL==Src)
    {
        printf("Customer List Are Already Empty.");
        return;
    }
    printf("Customer List Are..\n\n");
    while(Src != NULL)
    {
        printf("\n %d \t %s \t %0.0f \t %s \t %s ",Src->Acc_No,Src->Acc_Own_Name,Src->Mob_No,Src->City,Src->Acc_Type);
        if(Src->c != NULL)
        {
            printf("\t %0.2f \t %s \t %s \t",Src->c->Acc_Bal,Src->c->msg,Src->c->FName);
        }
        if(Src->s != NULL)
        {
            printf("| %0.0f | | %s |",Src->s->Acc_Bala,Src->s->msg);
        }
        else
            if(Src->l != NULL)
            {
                printf("| %0.2f | | %s | | %d |",Src->l->Amount,Src->l->Loan_Type,Src->l->Year);
            }
        Src=Src->NXT;
    }
}

int credit_Debit_Account(struct Customer *Src, char ch[])
{
     if(NULL== Src)
    {
        printf("Account Holder Are Already Empty.");
        return -2;
    }
    int Acc_No=0;
    float amt=0;
    printf("\n Please Enter Correct Account Number : ");
    scanf("%d",&Acc_No);
    while(Src != NULL)
    {
        if(Src->Acc_No == Acc_No)
        {
            break;
        }
        Src=Src->NXT;
    }
    if(ch == "debit")
    {
        isAmt:
        printf("\n Please Enter Amount How much you want to Debit.");
        scanf("%f",&amt);
        if(Src->c != NULL ){
            if(Src->c->Acc_Bal - amt < 0){
                printf("\n Insufficient Amount.");
                goto isAmt;
            }
            Src->c->Acc_Bal=Src->c->Acc_Bal - amt;
        }
        if(Src->s != NULL ){
            if(Src->s->Acc_Bala - amt < 0){
                printf("\n Insufficient Amount.");
                goto isAmt;
            }
            Src->s->Acc_Bala=Src->s->Acc_Bala - amt;
        }
        return 1;
    }
    if(ch == "credit")
    {
        isAmt1:
        printf("\n Please Enter Amount How much you want to Credit.");
        scanf("%f",&amt);
        if(Src->c != NULL ){
            if( amt < 0){
                printf("\n Please Enter Valid Amount.");
                goto isAmt1;
            }
            Src->c->Acc_Bal=Src->c->Acc_Bal + amt;
        }
        if(Src->s != NULL ){
            if(amt < 0){
                printf("\n Please Enter Valid Amount.");
                goto isAmt1;
            }
            Src->s->Acc_Bala=Src->s->Acc_Bala + amt;
        }
        return 1;
    }

}

int main()
{


    int no=0;
    struct Customer *Cust=NULL;

NEXT:
    printf("\n1. Add Customer.");
    printf("\n2. Debit Account.");
    printf("\n3. Credit Account.");
    printf("\n4. Display Customer.");
    printf("\n5. Exit.");
    printf("\n Enter Choice :");
    scanf("%d",&no);
    switch(no)
    {
    case 1:
        Add_Customer(&Cust);
        system("cls");
        printf("\nAccount Holder Details Successfully Saved.");
        goto NEXT;
    case 2:
        if(credit_Debit_Account(Cust,"debit") == 1){
            printf("\nAccount Holder Account Balance Debited Successfully.");
        }else{
            printf("\nAccount Holder Account Balance Debit Error.");
        }
        goto NEXT;
    case 3:
        if(credit_Debit_Account(Cust,"credit") == 1){
            printf("\nAccount Holder Account Balance Credited Successfully.");
        }else{
            printf("\nAccount Holder Account Balance Credit Error.");
        }
        goto NEXT;
    case 4:
        system("cls");
        DisplayL(Cust);
        goto NEXT;
    case 5:
        printf("\n THANK YOU.");
        return 0;
    default:
        system("cls");
        printf("Invalid Choice.");
        goto NEXT;
    }
    getch();
    return 0;
}
