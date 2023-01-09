#include <iostream>

using namespace std;

int main()
{
    int marks[] = {63, 89, 84, 77, 96};
    int i;

    int *ptr = marks;

    cout<<"The Marks of the first subject"  << *(ptr)<<endl;
    cout<<"The Marks of the second subject" << *(ptr+1)<<endl;
    cout<<"The Marks of the third subject " << *(ptr+2)<<endl;
    cout<<"The Marks of the fourth subject" << *(ptr+3)<<endl;
    cout<<"The Marks of the fifth subject"  <<  *(ptr+4)<<endl;
    





    return 0;
}
