/*Volume of Cylinder using the concept of Inheritance*/ 


#include<iostream>
using namespace std;

class Base
{
  private :
           int h;
  public :
         int r;
         void SetData();
         int GetData1();
         int GetData2();
         
};

void Base::SetData(void)
{
   r = 3;
   h = 5;
}

int Base :: GetData1()
{
    return h;
}
int Base :: GetData2()
{
   return r;
}

class Inherited : public Base
{
    float a;
  public:
        void Input();
        void Output();   
};

void Inherited :: Input()
{
   a = 3.14*r*r*GetData1();
}
void Inherited :: Output()
{
   cout<<"The Value of the radius is : "<<GetData1()<<endl;
   cout<<"The Value of the height is : "<<r<<endl;
   cout<<"The Volume of the Cylinder with this datas will be: "<<a<<endl;
}

int main()
{
    Inherited math;
    math.SetData();
    math.Input();
    math.Output();
    
    return 0;
}
