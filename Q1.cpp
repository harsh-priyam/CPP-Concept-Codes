#include<iostream>

using namespace std;

int main()
{
    int i,num,product;
    
    cout<<"Enter the number for which you have to print the table"<<endl;
    cin>>num;


    
    for ( i = 1; i <= 10 ; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    
    


    return 0;
}
