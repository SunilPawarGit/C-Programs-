#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
        printf("\n| %d | | %s | | %0.0f | | %s | | %s | ",Src->Acc_No,Src->Acc_Own_Name,Src->Mob_No,Src->City,Src->Acc_Type);

        Src=Src->NXT;
        if (Src->Acc_Type == "Current")
        {
            printf("");
        }
        else if (Src->Acc_Type == "Saving")
        {
            printf("");
        }
        else if(Src->Acc_Type == "Loan")
        {
            printf("");
        }
    }
}

void Add_CurrInfo(struct Current **Src)
{

    struct Current *Newn=NULL;
    Newn=(struct Current*)malloc(sizeof(struct Current));

    printf("\n Enter How Many Balance :");
    scanf(" %f",&Newn->Acc_Bal);
    printf("\n Enter Message :");
    scanf(" %[^\n]",&Newn->msg);
    printf("\n Enter Firm Name :");
    scanf(" %[^\n]",&Newn->FName);
}

void Add_SaveInfo(struct Saving *Src)
{
    struct Saving *Newn=NULL;
    Newn=(struct Saving*)malloc(sizeof(struct Saving));

    printf("\n Enter How Many Balance :");
    scanf("%f",&Newn->Acc_Bala);
    printf("\n Enter Message :");
    scanf(" %[^\n]",&Newn->msg);
}

void Add_LoanInfo(struct Loan *Src)
{
    struct Loan *Newn=NULL;
    Newn=(struct Loan*)malloc(sizeof(struct Loan));

    printf("\n Enter How Many Amount For Loan :");
    scanf("%f",&Newn->Amount);
    printf("\n Enter Year :");
    scanf("%d",&Newn->Year);
    printf("\n Enter Loan Type :");
    scanf(" %[^\n]",&Newn->Loan_Type);
}


int main()
{
    int no=0,No=0;
	struct Customer *Cust=NULL;
	struct Current *Curr=NULL;
	struct Saving *Save=NULL;
    struct Loan *Loane=NULL;
	NEXT:

    printf("\n1. Add Customer.");
    printf("\n2. Display Customer.");
    printf("\n3. Exit.");
    printf("\n Enter Choice :");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        Add_Customer(&Cust);
        system("cls");
        printf("\nAccount Holder Details Successfully Saved.");

            printf("\n1. Current.");
            printf("\n2. Saving.");
            printf("\n3. Loan.");
        Acctype:
            printf("\nChoice Account Type :");
        scanf("%d",&No);
    switch(No)
    {
    case 1:
        Add_CurrInfo(&Curr);
        break;
    case 2:
        Add_SaveInfo(Save);
        break;
    case 3:
        Add_LoanInfo(Loane);
        break;
    default :
        printf("\n Please Enter Valid Account Type :");
        goto Acctype;
    }
    system("cls");
        goto NEXT;

    case 2:
        system("cls");
        DisplayL(Cust);
        goto NEXT;
    case 3:
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
