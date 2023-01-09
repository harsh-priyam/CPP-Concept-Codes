#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int Sum(int a, int b)
    {
        return (a + b);
    }

    int GetSumOfReal(Complex, Complex);
    int GetSumOfImag(Complex, Complex);
};

class Complex
{
    friend class Calculator;   /* Here We Made the Friend to the Whole Class */ 
 
 friend int Calculator :: GetSumOfReal(Complex , Complex);   /* Here We Made the Friend only some of the */
                                                               /* Functions Of a Class */
 friend int Calculator :: GetSumOfImag(Complex , Complex);


private:
    int a, b;

public:
    void GetNum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void ReadNum(void)
    {
        cout << "Your Complex Number will be " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::GetSumOfReal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::GetSumOfImag(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;

    o1.GetNum(4, 5);
    o2.GetNum(8, 9);

    Calculator num;

    int result = num.GetSumOfReal(o1, o2);
    cout << "The Sum of the real part will be :" << result << endl;

    int result1 = num.GetSumOfImag(o1, o2);
    cout << "The Sum of the Imaginary part will be :" << result1 << endl;

    return 0;
}
