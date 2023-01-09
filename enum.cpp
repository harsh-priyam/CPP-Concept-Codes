#include<iostream>
using namespace std;


int main()
{
    enum Meal{breakfast,lunch,snacks,dinner};

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<snacks<<endl;
    cout<<(dinner==2)<<endl; /* dinner's location is not 2 and so its not true & hence will be zero*/

    return 0;
}
