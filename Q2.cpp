/*Adding Two Numbers using Classes and Friend Function Concept */

#include <iostream>

using namespace std;

class Y;

class X
{
private:
    friend void AddFunc(X, Y);
    int a1;

public:
    void SaveFunc1(int v1)
    {
        a1 = v1;
    }
};

class Y
{
private:
    friend void AddFunc(X, Y);
    int a2;

public:
    void SaveFunc2(int v2)
    {
        a2 = v2;
    }
};

void AddFunc(X o1, Y o2)
{
    int sum = o1.a1 + o2.a2;

    cout << "The Sum will be " << sum << endl;
}

int main()
{
    X num1;

    num1.SaveFunc1(5);

    Y num2;

    num2.SaveFunc2(9);

    AddFunc(num1, num2);
    return 0;
}
