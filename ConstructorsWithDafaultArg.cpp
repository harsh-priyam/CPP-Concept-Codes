#include<iostream>
using namespace std;

class StarFunc
{
      private:
               int x ;
               int y ;
               int z ;

      public :
               StarFunc(int a , int b , int c = 5)
               {
                  x = a;
                  y = b;
                  z = c;
               }         

             void ReadOnly(void);
};

void StarFunc :: ReadOnly()
{
       cout<<"The Value of x , y and z is "<<x<<","<<y<<"&" <<z<<endl;
}


int main()
{
  //  StarFunc s1(71,89,11);
                              /* Constructors with Default Arguments */
   StarFunc s1(71,89);
  
   s1.ReadOnly();

    
    return 0;
}
