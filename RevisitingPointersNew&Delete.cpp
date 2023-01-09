/* Revisting Pointers and the Use of "new" & "delete" KeyWord */

#include<iostream>
using namespace std;


int main()
{
    int a = 15;
    int *ptr  = &a;

    cout<<"The Value of ptr at the address of a will be :"<<*ptr<<endl;
    
    float *p = new float(40.36);
    cout<<"The  Value at the address p is "<<*(p)<<endl;

    int *arr = new int[3];
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

cout<<"The Value of arr at position 0 will be "<<arr[0]<<endl;
cout<<"The Value of arr at position 1 will be "<<arr[1]<<endl;
cout<<"The Value of arr at position 2 will be "<<arr[2]<<endl;

delete [] arr;

cout<<"The Value of arr at position 0 will be "<<arr[0]<<endl;
cout<<"The Value of arr at position 1 will be "<<arr[1]<<endl;
cout<<"The Value of arr at position 2 will be "<<arr[2]<<endl;
    return 0;
}
