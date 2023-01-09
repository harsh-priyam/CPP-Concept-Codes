//~~~~~~~~~~~~~~~~~~Function templates with parameters~~~~~~~~~~~~~~~~~~~

#include<iostream>
using namespace std;


void Swapping(int &p , int &q)
{
  int temp = p;
  p = q ;
  q = temp;

}

template <class T1 , class T2>
float AverageFunc(T1 a , T2 b)
{
    float avg = (a+b)/2;
return avg;    
}


int main()
{
    float ans;
   ans =  AverageFunc(6.9,8);
    cout<<"The Average of the two values will be :"<<ans<<endl;

    int p = 12;
    int q = 152;
    Swapping(p,q);
    cout<<"The Value of P is :"<<p<<"& the value of Q is :"<<q<<endl;
    return 0;
}
