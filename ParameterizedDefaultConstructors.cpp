/*  Parameterized and Default Constructor */

#include<iostream>

using namespace std;

class Points
{
private :
         int x,y;
public  : 
         void ReadValue(void)
         {
         cout<<"The Points Are "<<x<<","<<y<<endl;
         }
      Points(int , int);

};
Points :: Points(int x1 , int y1)
{
   x = x1;
   y = y1;
}

int main()
{
    Points p(4,5);
    p.ReadValue();

    Points q(3,2);
    q.ReadValue();

    return 0;
}
