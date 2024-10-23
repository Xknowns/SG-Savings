#include <iostream>
#include <cstdlib>
using namespace std;

double CalcFinalMoney(double amount,int Duration,double InterestRate)
{
    for(int i=1 ;i <= Duration ; i++)
    {
        amount += amount*InterestRate;
    }

    return amount;
}

int main()
{
    bool RunProgram =true;

    double SavingAccount = 1000.00;
    double FixedAccount;
    int Duration = 12;
    double InterestRate = 0.1;
    double SubtractAmout;
    bool Income = true;
    int currentMonth;
    int Choice;
    double deposit;


    do{

system("cls");


    if(Income == true)
    {
        SubtractAmout = SavingAccount*InterestRate;
        SavingAccount -=SubtractAmout;
        FixedAccount += SubtractAmout;
        Income = false;
    }

    FixedAccount = CalcFinalMoney(FixedAccount,Duration,InterestRate);

    cout << "SAVINGS ACCOUNT:" << SavingAccount << endl;
    cout << "FIXED ACCOUNT:" << FixedAccount << endl;
    cout << "Choose An option:" << endl;
    cout << "1.Withdraw"<< endl;
    cout << "2.Deposit"<< endl;
    cout << "3.Exit"<< endl;
    cin >> Choice;

    switch(Choice)
    {
        case 1:
            cout <<"Amout To withdraw:" ;
            cin >> SubtractAmout;
            SavingAccount = SavingAccount - SubtractAmout;
            break;
        case 2:
            cout <<"Amout To Deposit:" ; 
            cin >> deposit;
            SavingAccount += deposit;
            Income = true;
            break;
        case 3:
            RunProgram = false;
            break;
        default:
            cout << "Invalid Input";
    }

    }while(RunProgram);


    return 0;
}
