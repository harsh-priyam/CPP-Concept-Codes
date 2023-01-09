/*Uses of endl & setw()*/

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a = 5;
    int b = 15;
    int c = 115;
    int d = 1515;

    cout<<"The Value of a will be :"<<a<<endl;
    cout<<"The Value of b will be :"<<b<<endl;
    cout<<"The Value of c will be :"<<c<<endl;
    cout<<"The Value of d will be :"<<d<<endl;

    
    cout<<"The Value of a will be :"<<setw(4)<<a<<endl;
    cout<<"The Value of b will be :"<<setw(4)<<b<<endl;
    cout<<"The Value of c will be :"<<setw(4)<<c<<endl;
    cout<<"The Value of d will be :"<<setw(4)<<d<<endl;

    


    return 0;
}
