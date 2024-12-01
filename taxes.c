#include<stdio.h>

int main()
{
    //Declaration
    int TI, num;
    double taxOwed;

    //Data/input
    printf("************Menu****************\n");
    printf("1) Single\n");
    printf("2) Married Filing Jointly\n");
    printf("3) Married Filing Separately\n");
    printf("4) Head of Household\n");
    printf("5) Exit\n");
    printf("********************************\n");

    printf("\nEnter status : ");
    scanf("%d", &num);

    //Processing/calculations and output
    switch(num)
    {
        case 1: //single
            printf("Enter your taxable TI: $");
            scanf("%d", &TI);
            if(TI > 0 && TI <= 24000)
            {
                taxOwed = TI*0.15;
            }
            else if(TI > 24000 && TI <= 58000)
            {
                taxOwed = ((TI-24000)*0.28)+3600.00;
            }
            else if(TI > 58000 && TI <= 121300)
            {
                taxOwed = ((TI-58000)*0.31)+13120.00;
            }
            else if(TI > 121300 && TI <= 263750)
            {
                taxOwed = ((TI-121300)*0.36)+32743.00;
            }
            else
            {
                taxOwed = ((TI-263750)*0.396)+84025.00;
            }
            printf("\nThe taxes owed are: $%.2f\n", taxOwed);
            return 0;

        case 2: //Married Filing Jointly
            printf("Enter your taxable TI: $");
            scanf("%d", &TI);
            if(TI > 0 && TI <= 40100)
            {
                taxOwed = TI*0.15;
            }
            else if(TI > 40100 && TI <= 96900)
            {
                taxOwed = ((TI-40100)*0.28)+6015.00;
            }
            else if(TI > 96900 && TI <= 147700)
            {
                taxOwed = ((TI-96900)*0.31)+21919.00;
            }
            else if(TI > 147700 && TI <= 263750)
            {
                taxOwed = ((TI-147700)*0.36)+37667.00;
            }
            else
            {
                taxOwed = ((TI-263750)*0.396)+79445.00;
            }
            printf("\nThe taxes owed are: $%.2f\n", taxOwed);
            return 0;

        case 3: //Married Filing Separately
            printf("Enter your taxable TI: $");
            scanf("%d", &TI);
            if(TI > 0 && TI <= 20050)
            {
                taxOwed = TI*0.15;
            }
            else if(TI > 20050 && TI <= 48450)
            {
                taxOwed = ((TI-20050)*0.28)+3007.50;
            }
            else if(TI > 48450 && TI <= 73850)
            {
                taxOwed = ((TI-48450)*0.31)+10959.50;
            }
            else if(TI > 73850 && TI <= 131875)
            {
                taxOwed = ((TI-73850)*0.36)+18833.50;
            }
            else
            {
                taxOwed = ((TI-131875)*0.396)+39722.50;
            }
            printf("\nThe taxes owed are: $%.2f\n", taxOwed);
            return 0;

        case 4: //Head of Household
            printf("Enter your taxable TI: $");
            scanf("%d", &TI);
            if(TI > 0 && TI <= 32150)
            {
                taxOwed = TI*0.15;
            }
            else if(TI > 32150 && TI <= 83050)
            {
                taxOwed = ((TI-32150)*0.28)+4822.50;
            }
            else if(TI > 83050 && TI <= 134500)
            {
                taxOwed = ((TI-83050)*0.31)+19064.50;
            }
            else if(TI > 134500 && TI <= 263750)
            {
                taxOwed = ((TI-134500)*0.36)+35074.00;
            }
            else
            {
                taxOwed = ((TI-263750)*0.396)+81554.00;
            }
            printf("\nThe taxes owed are: $%.2f\n", taxOwed);
            return 0;

        case 5: //Exit
            printf("\nExit program...");
            return 0;

        default: //user input anything other than 1-5
            printf("You entered a wrong status. Program Exit...");
            return 0;
    }

    return 0;
}
