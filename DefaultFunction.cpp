#include<iostream>
using namespace std;

int BankFunction(int money , float interest = 1.04)
{
return (money*interest);
}


int main()
{
    int money;
cout<<"Enter the Money you want to Deposit"<<endl;
cin>>money;

cout<<"For A Regular Costumer : As You had deposit "<<money<<"You will get"<<BankFunction(money)<<endl; 
    return 0;
}
