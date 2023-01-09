/*Pointers*/


#include <iostream>

using namespace std;

int main()
{
    int a = 30  ;
    int* b = &a ;


cout<<"The address of a will be :"<<&a<<endl;
cout<<"The value of a will be   :"<<a<<endl;

cout<<"The address of a will be :"<<b<<endl;
cout<<"The value of a will be :" <<*b<<endl;

    return 0;
}
