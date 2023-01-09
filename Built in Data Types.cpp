/*~~~~~~~~~~~~~~~~~~Built in Data Types~~~~~~~~~~~~~*/

#include<iostream>
using namespace std;

int d = 50;

int main()
{
    int d = 63;
    cout<<"The Value of d will be "<<d;
    cout<<"The Value of d will be "<<::d; /*Here we use ( :: ) operators to print value of d as global one */


    return 0;
}
