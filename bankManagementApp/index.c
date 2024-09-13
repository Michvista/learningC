#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int accNum;
    char *name;
    double balance;
} Account;


void createAcc();
void depoistMoney();
void withdrawMoney();
void viewAccDeets();

int main(void) 
    {
    int choice;
    while (1)
    {
        printf("Welcome to a Bank management System\n");
        printf("1, Create Acc\n");
        printf("2, Depoist Money\n");
        printf("3, Withdraw Money\n");
        printf("4, View Acc Deets\n");
        printf("5, Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAcc();
            break;
        case 2:
            depoistMoney();
            break;
        case 3:
            withdrawMoney();
            break;
        case 4:
            viewAccDeets();
            break;
        case 5:
            exit(0);
            break;
        
        default:
            printf("choice not found try again\n");
        }
    }
    return 0;
}

void createAcc() 
{
    FILE *file = fopen("accounts.csv", "a");
    Account acc;
    printf("Enter Acc Number: ");
      scanf("%d", &acc.accNum);

    printf("Enter Acc Name: ");
        scanf("%s", acc.name);
    acc.balance = 0;
    printf("%i,%i,%s \n", acc.accNum,acc.balance,acc.name);
    fprintf(file, "Account Name: %s, Account Number: %i, Account Balance: %i \n", acc.name,acc.accNum,acc.balance);
    // // fwrite(&acc, sizeof(Account), 1, file);
    fclose(file);

    printf("Account created Succesfully \n");
}


void depoistMoney() 
{
    int accountnum;
    double depositAmount;
    int accidnum;
    double currentBalance;
    char name[50];

    int found = 0;
    printf("Enter your Acc Number: ");
      scanf("%i", &accountnum);
    printf("Enter amount: ");
      scanf("%lf", &depositAmount);

    FILE *file = fopen("accounts.csv", "r");

    if (file == NULL)
    {
        printf("could not open file\n");
    }
    FILE *tempfile = fopen("temp.csv", "w");
     if (tempfile == NULL)
    {
        printf("could not open temp file\n");
    }
    while (fscanf(file, "Account Name: %[^,], Account Number: %d, Account Balance: %lf\n", name, &accidnum, &currentBalance) != EOF) 
    {
        if (accidnum == accountnum) 
        {
            currentBalance += depositAmount;
            found = 1;
        }
            fprintf(tempfile, "Account Name: %s, Account Number: %i, Account Balance: %.2lf\n", name, accidnum, currentBalance);
    }

    fclose(file);
    fclose(tempfile);

    remove("accounts.csv");
    rename("temp.csv", "accounts.csv");

    printf("Deposit successful.\n");

    
}

void withdrawMoney() 
{
    int accountnum;
    double withdrawalAmount;
    int accidnum;
    double currentBalance;
    char name[50];

    int found = 0;
    printf("Enter your Acc Number: ");
      scanf("%i", &accountnum);
    printf("Enter amount to withdraw: ");
      scanf("%lf", &withdrawalAmount);


       FILE *file = fopen("accounts.csv", "r");

    if (file == NULL)
    {
        printf("could not open file\n");
    }
    FILE *tempfile = fopen("temp.csv", "w");
     if (tempfile == NULL)
    {
        printf("could not open temp file\n");
    }
    while (fscanf(file, "Account Name: %[^,], Account Number: %d, Account Balance: %lf\n", name, &accidnum, &currentBalance) != EOF) 
    {
        if (accidnum == accountnum) 
        {
            currentBalance = currentBalance- withdrawalAmount;
            found = 1;
        }
            fprintf(tempfile, "Account Name: %s, Account Number: %i, Account Balance: %.2lf\n", name, accidnum, currentBalance);
    }

    fclose(file);
    fclose(tempfile);

    remove("accounts.csv");
    rename("temp.csv", "accounts.csv");

    printf("Withdrawal successful.\n");

    
}

void viewAccDeets() 
{
    int accountnum;
    int accidnum;
    double currentBalance;
    char name[50];

    int found = 0;
    printf("Enter your Acc Number: ");
      scanf("%i", &accountnum);

      FILE *file = fopen("accounts.csv", "r");

    if (file == NULL)
    {
        printf("could not open file\n");
    }

        while (fscanf(file, "Account Name: %[^,], Account Number: %d, Account Balance: %lf\n", name, &accidnum, &currentBalance) != EOF) 
    {
        if (accidnum == accountnum) 
        {
            printf("Name: %s, Acc Number: %i, Acc Balance: %.2lf\n", name, accountnum, currentBalance);
            found = 1;
        }
           
    }

    fclose(file);
}