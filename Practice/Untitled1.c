
struct Current
{
	float Acc_Bal;
	char msg[20];
	char FName[20];
}Curr;
/// Add Type Info
void Add_CurrInfo(struct Current *Src)
{
    printf("\n Enter How Many Balance :");
    scanf("%f",&Src.Acc_Bal);
    printf("\n Enter Message :");
    scanf(" %[^\n]",&Src.msg);
    printf("\n Enter Firm Name :");
    scanf(" %[^\n]",&Src.FName);
}
void Add_SaveInfo(struct Saving *Src)
{
    printf("\n Enter How Many Balance :");
    scanf("%f",&Src.Acc_Bala);
    printf("\n Enter Message :");
    scanf(" %[^\n]",Src.msg);
}

void Add_LoanInfo(struct Loan *Src)
{
    printf("\n Enter How Many Amount For Loan :");
    scanf("%f",&Src.Amount);
    printf("\n Enter Year :");
    scanf("%d",Src.Year);
    printf("\n Enter Loan Type :");
    scanf(" %[^\n]",Src.Loan_Type);
}
