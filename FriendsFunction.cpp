#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void GetFunc(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void ReadFunc()
    {
        cout << "The Value of the Complex no will be " << a << " + " << b << " i" << endl;
    }
 friend Complex SumComplex(Complex o1, Complex o2);  /* Friends Function */
};

Complex SumComplex(Complex o1, Complex o2) /*Alone This will throw Error so for avoiding this We need Friends Function*/
{
    Complex o3;
    o3.GetFunc((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2 , sum;

    c1.GetFunc(4, 5);
    c1.ReadFunc();

    c2.GetFunc(1, 2);
    c2.ReadFunc();

    sum = SumComplex(c1,c2);
       sum.ReadFunc();
    return 0;
}
