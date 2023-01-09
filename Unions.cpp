#include <iostream>

using namespace std;

union price
{
    int rupees;
    int dollar;
    int pounds;
};

int main()
{
    union price value1;

value1.rupees= 19;
value1.dollar = 72;
value1.pounds =  100;

cout<<"Management :"<<value1.dollar<<endl;


    return 0;
}
