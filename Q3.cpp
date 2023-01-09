/* Swaping Between Two Numbers Using Classes and Friend function */

#include <iostream>
using namespace std;

class Y;

class X
{
private:
    int a1;
    friend void SwapFunc(X &, Y &);

public:
    void GetNum(int v1)
    {
        a1 = v1;
    }
    void display()
    {
        cout << a1;
    }
};

class Y
{
private:
    friend void SwapFunc(X &, Y &);
    int a2;

public:
    void GetNum2(int v2)
    {
        a2 = v2;
    }
    void display2()
    {
        cout << a2;
    }
};

void SwapFunc(X &p, Y &q)
{
    int temp = p.a1;
    p.a1 = q.a2;
    q.a2 = temp;
}

int main()
{
    X num1;
    num1.GetNum(45);

    Y num2;
    num2.GetNum2(98);

    SwapFunc(num1, num2);

    cout << "The  Swapping Proccess Gives the value for a will be  "<<endl;
    num1.display();

    cout<<endl;

    cout << "The  Swapping Proccess Gives the value for b will be  "<<endl;
    num2.display2();

    return 0;
}
