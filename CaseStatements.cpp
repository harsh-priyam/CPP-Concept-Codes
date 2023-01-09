#include<iostream>

using namespace std;

int main()
{
    int choice;
    cout<<"Welcome to dominos"<<endl;

    cout<<"Enter Your Choice --::  1) Burger 2) Pizza 3) Nuggets 4) Pasta 5) Colddrinks"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 1:
        cout<<"Here's Yours Burger..Have A great meal"<<endl;
        break;
    case 2:
        cout<<"Here's Yours Pizza..Have A great meal"<<endl;
        break;
    case 3:
        cout<<"Here's Yours Nuggets..Have A great meal"<<endl;
        break;
    case 4:
        cout<<"Here's Yours Pasta..Have A great meal"<<endl;
        break;
    case 5:
        cout<<"Here's Yours Colddrinks..Have A great meal"<<endl;
        break;
    
    default:
         cout<<"Invalid Choice"<<endl;
        break;
    }
    return 0;
}
