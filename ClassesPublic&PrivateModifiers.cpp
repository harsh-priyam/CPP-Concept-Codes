#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a, int b, int c);
    void getData()
    {
        cout << "The value of a will be  " << a << endl;
        cout << "The value of b will be  " << b << endl;
        cout << "The value of c will be  " << c << endl;
        cout << "The value of d will be  " << d << endl;
        cout << "The value of e will be  " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
  Employee harsh;
  harsh.d = 67;  
  harsh.e = 87;  
 /* harsh.a = 56;*/  /*This Will throw error as a has been decalered as private data and can only be accessible via fuction*/
 harsh.setData(89,56,47);
 harsh.getData();


    return 0;
}
