#include<iostream>
using namespace std;

class ComplexFunc
{
    private :
            int a;
            int b;
    public  :         
            void GetData(int v1 , int v2)
          {
             a = v1;
             b = v2;
          }
          
            void GiveData(ComplexFunc c1  , ComplexFunc c2)
            {
               a = c1.a + c2.a ; 
               b = c1.b + c2.b ;
            }

            void DisplayData()
            {

             cout<<"Your Complex number will be "<<a<<"+"<<b<<"i"<<endl;

            }



};


int main()
{
     ComplexFunc o1,o2,o3;
     o1.GetData(4,5);
     o1.DisplayData();

     o2.GetData(1,2);
     o2.DisplayData();

     o3.GiveData(o1,o2);
      o2.DisplayData();
          

    return 0;
}
