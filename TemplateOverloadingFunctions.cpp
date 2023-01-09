#include <iostream>
using namespace std;

void Function(int a)
{
    cout << "The real Function has been called...with value of : " << a << endl;
}


template <class T>
T Function(T a)
{
    cout << "The templatic Function has been called...with value of : " << a << endl;
}

int main()
{
   Function(5);//Exact match takes the priority
    return 0;
}
