//Class Templates With Default Parameters 

#include<iostream>
using namespace std;

template < class T1=int, class T2 = float, class T3 =char >

class  Harsh
{
  public:
        T1 data1;
        T2 data2;
        T3 data3;
        
   Harsh(T1 x , T2 y , T3 z)
   {     
    data1 = x;
    data2 = y;
    data3 = z;
   }
   void DisplayDataFunc()
   {
     cout<<"The Value of data1 is : "<<data1<<endl;
     cout<<"The Value of data2 is : "<<data2<<endl;
     cout<<"The Value of data3 is : "<<data3<<endl;
   }

};

int main()
 
{
      Harsh<> h(5,9.8,'f');
      h.DisplayDataFunc();
      cout<<endl;
      Harsh<float , char , char> s(77.6,'r','E');
      s.DisplayDataFunc();   
    
    return 0;
}
