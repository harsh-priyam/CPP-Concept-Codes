#include<iostream>
using namespace std;

int main()
{
    int marks[25],i;

    cout<<"Enter any 5 elements for the Array"<<endl;
    for ( i = 0; i < 5; i++)
    {
        cin>>marks[i];
    }
    


    cout<<"The marks obtained in first subject is :"<<marks[0]<<endl;
    cout<<"The marks obtained in second subject is :"<<marks[1]<<endl;
    cout<<"The marks obtained in third subject is :"<<marks[2]<<endl;
    cout<<"The marks obtained in fourth subject is :"<<marks[3]<<endl;
    cout<<"The marks obtained in fifth subject is :"<<marks[4]<<endl;

    return 0;
}
