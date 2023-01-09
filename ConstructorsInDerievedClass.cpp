#include <iostream>
using namespace std;

class Base1
{
private:
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Constructor of Base is Invoked" << endl;
    }
    void print_data1(void)
    {
        cout << "The Value of data is " << data1 << endl;
    }
};
class Base2
{
private:
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
    }
    void print_data2(void)
    {
        cout << "The Value of the data is " << data2 << endl;
    }
};

class Derieved : public Base1 , public Base2
{
private:
         int derieved1; 
          int derieved2;
public:
      Derieved(int a ,int b ,int c , int d) : Base1(a),Base2(b)
      {
           derieved1 = c;
           derieved2 = d;
        cout<<"Derieved Class has been invoked....."<<endl;
      }

     void PrintData(void)
     {
      cout<<"The Value of Derieved1 will be "<<derieved1<<endl;
      cout<<"The Value of Derieved2 will be "<<derieved2<<endl;
     };

};


int main()
{
    Derieved harsh(10,20,30,40);
    harsh.print_data1();
    harsh.print_data2();
    harsh.PrintData();
    

    return 0;
}
